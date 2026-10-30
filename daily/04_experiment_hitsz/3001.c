#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int ou[n], ji[n];
    int oucount = 0, jicount = 0;

    // 1. 按原顺序分裂为两个数组
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            ou[oucount++] = arr[i];
        } 
        else {
            ji[jicount++] = arr[i];
        }
    }

    // 2. 交替合并，并且去除重复项
    int i = 0, j = 0;          // 偶数组、奇数组的下标
    int last;                  // 上一个输出的值
    int first = 1;             // 是否是第一个输出

    while (i < oucount || j < jicount) {
        int x;
        // 如果还有偶数就先取偶数
        if (i < oucount) {
            x = ou[i++];
        } 
        // 偶数用完了，只能取奇数
        else {               
            x = ji[j++];
        }

        // 去重
        if (first || x != last) {
            if (!first) 
            {
                printf(" ");
            }
            printf("%d", x);
            last = x;
            first = 0;
        }

        // 再取奇数（如果还有）
        if (j < jicount) {
            x = ji[j++];
            if (first || x != last) {
                if (!first) printf(" ");
                printf("%d", x);
                last = x;
                first = 0;
            }
        }
    }

    printf("\n");
    return 0;
}