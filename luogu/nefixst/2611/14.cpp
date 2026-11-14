#include <iostream>
using namespace std;

#define MO 1000000007

long long nmPGgcd(long long n, long long m)
{
    while (m != 0)
    {
        long long r = n % m;
        n = m;
        m = r;
    }
    return n;
}

long long power(long long a, long long m)
{
    a %= MO;
    long long num = 1;
    while (m > 0)
    {
        if (m & 1)
        {
            num = num * a % MO;
        }
        a = a * a % MO;
        m >>= 1;
    }
    return num;
}

int main()
{
    int T;
    cin >> T;

    for (long long i = 0; i < T; i++)
    {
        long long a, m, n;
        cin >> a >> m >> n;
        long long result = power(a, nmPGgcd(m + 1, n + 1)) - 1;
        cout << (result + MO) % MO << endl;
    }
    return 0;
}