#include <stdio.h>

// 冒泡排序，从小到大
int main(void)
{
    int n;
    printf("输入若干个整数:");
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

    // 冒泡
    for (int j = 0; j < n - 1; j++)
    {
        // 值得注意的是，每次完成一轮冒泡，至少最后一个数字肯定是顺序正确的，所以内环循环次数可以减j
        for (int i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }

    return 0;
}