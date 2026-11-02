#include <stdio.h>

// 选择排序，从小到大
int main(void)
{
    // 获取个数
    int n;
    printf("输入若干个整数:", n);
    scanf("%d", &n);

    // 获取数据
    printf("输入不多于%d个整数:", n);
    if (n > 100 || n < 0)
    {
        printf("输入不合法！");
        return 1;
    }

    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 选择排序
    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        // 找出最小的一项，从i+1开始检索即可
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;

}