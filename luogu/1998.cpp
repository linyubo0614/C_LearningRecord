#include <iostream>
using namespace std;
/**
 * 递归总是不会
 * 很明显这题要用递归写，但是就是不会，再多试试类似题吧
 * 
 * 另外cpp中的字符串可以直接进行加法运算，很方便
*/
// 不断分解直到只有2(2)，2，2(0)分别对应2的2，1，0次方
string solve(int n)
{
    bool first = true;
    string res;

    for (int i = 14; i >= 0; i--)
    {
        if (n & 1 << i)
        {
            if (!first)
            {
                res += "+";
            }
            first = false;

            if (i == 0)
            {
                res += "2(0)";
            }

            else if (i == 1)
            {
                res += "2";
            }

            else
            {
                res += "2(" + solve(i) + ")";
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n) << endl;
    return 0;
}