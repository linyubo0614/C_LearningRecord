#include <stdio.h>

int main()
{
    int arr[10] = {29, 10, 14, 37, 13, 5, 40, 8, 33, 2};
    int n = 10;

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        printf("第%d趟：最小值为%d，位置%d\n",
               i + 1, arr[min_index], min_index);

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("排序结果：");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}