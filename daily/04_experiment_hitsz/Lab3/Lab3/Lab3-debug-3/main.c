//输入一个3行4列的二维数组，然后输出这个二维数组的元素值
#include <stdio.h>
#define M 3
#define N 4

/*
//方法1
void InputArray(int p[][N],int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
}

void OutputArray(int p[][N],int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",p[i][j]);
        }
        printf("\n");
    }
}
*/


//方法2
void InputArray(int (*p)[N],int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
}

void OutputArray(int (*p)[N],int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",*(*(p+i)+j));
        }
        printf("\n");
    }
}



/*
//方法3
void InputArray(int *p, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", p + i * n + j);  // 等价于 &p[i * n + j]
        }
    }
}

void OutputArray(int *p, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", *(p + i * n + j));  // 等价于 p[i * n + j]
        }
        printf("\n");
    }
}
*/

int main()
{
    int arr[M][N];    // 定义3行4列的二维数组
    //方法1和方法2
    //InputArray(arr, M, N);   // 输入数组元素
    //OutputArray(arr, M, N);  // 输出数组元素

    //方法3
    InputArray(*arr, M, N);   // 输入数组元素
    OutputArray(*arr, M, N);  // 输出数组元素

    return 0;
}
