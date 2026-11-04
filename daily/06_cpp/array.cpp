#include <iostream>

using namespace std;

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count; i++)
    {
        cout << "第" << i << "个数字是:" << arr[i] << '\n';
    }

    int arr2[2][2];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << "第" << i << "行" << "第" << j << "列是:" << arr2[i][j]  << endl;
        }
    }
    return 0;
}
