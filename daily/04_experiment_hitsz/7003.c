#include <stdio.h>

#define MAXN 1005

int main(void) {
    int n;
    int a[MAXN];
    int sorted[MAXN];
    int count[4] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    // 目标数组
    int index = 0;
    for (int value = 1; value <= 3; value++) 
    {
        for (int i = 0; i < count[value]; i++)
        {
            sorted[index++] = value;
        }
    }

    // 错位
    int mis[4][4] = {0};
    for (int i = 0; i < n; i++) {
        if (a[i] != sorted[i]) {
            mis[a[i]][sorted[i]]++;
        }
    }

    int ans = 0;

    // 先把能两两互换的交换了（两两互换收益最高）
    int pairs[3][2] = 
    {
        {1, 2},
        {1, 3},
        {2, 3}
    };

    for (int p=0;p<3;p++)
    {
        int x=pairs[p][0];
        int y=pairs[p][1];

        // 取出较小的
        int t=mis[x][y]<mis[y][x]?mis[x][y]:mis[y][x];
        ans+=t;

        mis[x][y]-=t;
        mis[y][x]-=t;
    }

    // 剩下的错位都是三个相互错位的（形如1的位置放2，2的位置放3，3的位置放1），每3个错位需要2次交换
    int remaining=0;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            if (i!=j)
            {
                remaining+=mis[i][j];
            }
        }
    }

    ans+=(remaining/3)*2;

    printf("%d\n",ans);
    return 0;
}