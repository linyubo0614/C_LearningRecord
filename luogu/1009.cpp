#include <iostream>
#include <vector>
using namespace std;

vector<int> factroial(int k)
{
    vector<int> fact(1, 1);
    for (int i = 1; i <= k; i++)
    {
        // 模拟乘法
        int carry = 0;
        for (int j = 0; j < (int)fact.size(); j++)
        {
            int temp = fact[j] * i + carry;
            fact[j] = temp % 10;
            carry = temp / 10;
        }
        while (carry)
        {
            fact.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;

    // 累加
    vector<int> sum(1, 0);
    for (int i = 1; i <= n; i++)
    {
        // 模拟加法
        vector<int> fact = factroial(i);
        int carry = 0;
        if (sum.size() < fact.size())
        {
            sum.resize(fact.size(), 0);
        }

        for (int k = 0; k < (int)fact.size(); k++)
        {
            int temp = fact[k] + sum[k] + carry;
            sum[k] = temp % 10;
            carry = temp / 10;
        }

        while (carry)
        {
            sum.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (int i = (int)sum.size()-1; i >=0; i--)
    {
        cout << sum[i];
    }
    cout << endl;

    return 0;
}