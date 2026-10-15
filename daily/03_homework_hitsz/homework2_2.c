// 采用穷举法，用函数编程实现计算两个正整数的最小公倍数的函数
// 在主程序中调用该函数计算并输出从键盘任意输入的两正整数的最小公倍数。

#include <stdio.h>

int getlcm(int a, int b);

int main(void)
{
    int num1, num2;

    printf("请输入两个正整数: ");
    scanf("%d %d", &num1, &num2);

    int lcm = getlcm(num1, num2);

    printf("最小公倍数是: %d\n", lcm);
    return 0;
}

int getlcm(int a, int b)
{
    int max = (a > b) ? a : b; 
    int lcm = max;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)//如果较大的数是两个数的倍数，则他就是最小公倍数
        {
            return lcm; 
        }
        //否则加上较大的数
        lcm += max; 
    }
}