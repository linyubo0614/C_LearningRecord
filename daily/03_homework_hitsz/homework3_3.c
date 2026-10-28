#include <stdio.h>

#define N 10

// 转置
void Transpose(int a[][N], int n);

// 交换两个数
void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a[N][N];
    int n;
    int i,j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    Transpose(a, n);

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("[");
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
            if (j < n - 1) printf(",");
        }
        printf("]");
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}


// 原地转置：只遍历上三角，与下三角对称元素交换
void Transpose(int a[][N], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)   // j 从 i+1 开始，避免重复交换
        {
            Swap(&a[i][j], &a[j][i]);
        }
    }
}