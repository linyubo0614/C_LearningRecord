#include <iostream>
using namespace std;

// 斐波那契只返回系数
int a_fabonacci(int x)
{
    if (x == 1)
        return 1;
    else if (x == 2)
        return 0;
    else if (x >= 3)
    {
        return a_fabonacci(x - 1) + a_fabonacci(x - 2);
    }
    return -1;
}

int num2_fabonacci(int x)
{
    if (x == 1)
        return 0;
    else if (x == 2)
        return 1;
    else if (x >= 3)
    {
        return num2_fabonacci(x - 1) + num2_fabonacci(x - 2);
    }
    return -1;
}

// 出第x站的时候车上的人数
int numx(int x,int num2,int a)
{
    return (a_fabonacci(x)+1)*a+(num2_fabonacci(x)-1)*num2;
}

int main()
{
    int a, n, m, x;
    cin >> a >> n >> m >> x;

    int num2=(m-a*a_fabonacci(n-1)-a)/(num2_fabonacci(n-1)-1);
    // 出x站的时候的人数
    int num=numx(x,num2,a);
    cout << num;
    
    return 0;
}