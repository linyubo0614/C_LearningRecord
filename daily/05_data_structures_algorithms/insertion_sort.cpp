#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    // 从第1个开始排序
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] >temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}

int main()
{
    int arr[5] = {2, 5, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
}