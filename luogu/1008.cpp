#include <iostream>
using namespace std;
// 这题第一遍没做出来，一方面是题目理解有问题，三个数字之间的倍速是确定的
// 另一方面是不会比较有没有相同的数字，
// 数组常常可以发挥类似标志位的作用？
int main()
{
    for (int i = 123; i <= 329; i++)
    {
        int a = i, b = 2 * i, c = 3 * i;

        int num[9] = {
            a / 100, (a / 10) % 10, a % 10,
            b / 100, (b / 10) % 10, b % 10,
            c / 100, (c / 10) % 10, c % 10
        };

        int cnt[10] = {0};
        bool ok = true;

        for (int j = 0; j < 9; j++)
        {
            if (num[j] == 0 || cnt[num[j]] > 0)
            {
                ok = false;
                break;
            }
            cnt[num[j]]++;
        }

        if (ok)
        {
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}