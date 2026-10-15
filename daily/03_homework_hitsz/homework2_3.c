//使用递归函数实现计算n的k次方，其中n与k均为正整数

#include <stdio.h>

int power(int n, int k);

int main(void)
{
    int n, k;

    printf("请输入两个正整数n和k: ");
    scanf("%d %d", &n, &k);

    int result = power(n, k);

    printf("%d的%d次方是: %d\n", n, k, result);
    return 0;
}

int power(int n, int k)
{
    if (k == 0) // 非0数的0次方为1
    {
        return 1;
    }
    else //递归情况。n的k次方等于n乘以n的k-1次方
    {
        return n * power(n, k - 1);
    }
}