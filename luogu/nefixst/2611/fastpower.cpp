#include <iostream>
using namespace std;

// 借助膀题学习一下快速幂

/**
 * 普通快速幂
 * 原理是明显的，任何一个数字（exp）都可以用二进制表示
 * 复杂度直接降为logn，想出这个算法的真nb
 */

long long int fastpower(int base, int exp)
{
    long long res = 1;
    while (exp > 0)
    {
        if (exp & 1)
        {
            res *= base;
        }
        base *= base;
        exp >>= 1;
    }
    return res;
}

/**
 * 取模快速幂，大部分需要快速幂的题目涉及取模？
 * 数论基础是明显的
 */
long long int fastmodpower(int base, int exp, int mod)
{
    base %= mod;
    if (base < 0)
        base += mod;

    // 取模是为了修正好mod==1的边界情况，任何数取模为1都等于0
    long long res = 1 % mod;
    while (exp > 0)
    {
        if (exp & 1)
        {
            res = (__int128)res * base % mod;
        }
        base *= base;
        exp >>= 1;
    }
    return res;
}

/**
 * 快速幂的递归写法，以取模快速幂为例
 * 害怕递归（
 */
long long recursivefastpow(int base, int exp, int mod)
{
    long long int res;
    base %= mod;
    if (base < 0)
    {
        base += mod;
    }
    if(exp==0) return 1 % mod;

    long long half = recursivefastpow(base, exp / 2, mod);

    if (exp % 2 == 1)
    {
        res = (half * half % mod) * base % mod;
    }
    else if (exp % 2 == 0)
    {
        res = half * half % mod;
    }
    return res;
}

/**
 * 负指数的快速幂
 * 迭代法为例
 */
double fastpownegatibe(double base, int exp)
{
    if (exp < 0)
    {
        base = 1.0 / base;
        exp = -exp;
    }

    double res = 1;
    while (exp > 0)
    {
        if (exp & 1)
        {
            res *= base;
        }
        base *= base;
        exp >>= 1;
    }

    return res;
}

int main()
{
    cout << "cxk ijk";
    return 0;
}
