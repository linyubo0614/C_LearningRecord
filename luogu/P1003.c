#include <stdio.h>

/**
 * 输入地毯的块数
 * 输入每块地毯的信息
 * 给出左下角的点的左边和长宽
 * 我们可以确定四个点的坐标，于是可以用目标点的坐标是否在四个点的坐标之内确定是否被覆盖
 *
 * 接下来思考如何确定最上面的一块
 *
 */
int main()
{
    int n;
    scanf("%d", &n);

    int points[10005][2] = {0};
    int area[10005][2] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &points[i][0], &points[i][1], &area[i][0], &area[i][1]);
    }

    int target_x;
    int target_y;
    scanf("%d%d", &target_x, &target_y);

    int tag=-1;
    // for (int i = 0; i < n; i++)
    for(int i = n-1; i >= 0; i--)
    {
        if (target_x <= points[i][0] + area[i][0] && target_x >= points[i][0] && target_y <= points[i][1] + area[i][1] && target_y >= points[i][1])
        {
            tag = i+1;
            break;
        }
    }

    printf("%d", tag);
}