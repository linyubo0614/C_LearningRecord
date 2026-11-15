#include <iostream>

using namespace std;

// 前n斜排所有数字个数之和
// 其实这样感觉不如直接用等差数列求和公式了，时间复杂O(n),这无疑是糟糕的
int fact_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1/1";
        return 0;
    }

    // row是目标数字所在的行
    int row = 1;
    while (fact_n(row) < n)
    {
        row++;
    }

    // n行第k个数字，有顺逆之分
    int k = n - fact_n(row - 1);

    // 分子分母之和为row+1
    int son;
    int mom;
    if (row % 2 == 0)
    {
        son = k;
        mom = row + 1 - k;
    }
    else
    {
        son = row + 1 - k;
        mom = k;
    }

    cout << son << "/" << mom;
    return 0;
}