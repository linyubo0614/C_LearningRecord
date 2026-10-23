#include <stdio.h>
#include <math.h>

// 计算并返回一个数的真因数之和（不含自身）
int sum_of_divisors(int num)
{
    if (num <= 1)
        return 0;
    int sum = 1; // 1是任何大于1的正整数的真因数

    // 一对分解组合必定有其中一个数字小于该数字的根号（反证法可知）
    int limit = (int)sqrt(num);

    for (int i = 2; i <= limit; i++)
    {
        if (num % i == 0)
        {
            // 加上较小的因子
            sum += i;

            // 两个因子相同的话不重复计入
            if (i != (num / i))
            {
                // 加上配对的另一个因数
                sum += (num / i);
            }
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 2; a <= n; a++)
    {
        int b = sum_of_divisors(a);

        // 条件：b在范围内，且b大于a（确保小的在前且不重复输出）
        if (b > a && b < n)
        {
            if (sum_of_divisors(b) == a)
            {
                printf("(%d,%d)\n", a, b);
            }
        }
    }
    return 0;
}