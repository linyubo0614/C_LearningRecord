// 模拟计算

#include <stdio.h>
int main()
{
    int a, b;
    char shizi;
    int result = 0;
    int first = 1; // 标记是否是第一个运算数

    while (1)
    {
        if (first)
        {
            // 获取第一个数字
            scanf("%d", &a);
            result = a;
            first = 0;
        }
        else
        {
            scanf(" %c",&shizi);
            if (shizi != '+' && shizi != '-' && shizi != '*' && shizi != '/' && shizi != '=')
            {
                printf("错误的运算符:%c\n", shizi);
                return 0;
            }
            if (shizi == '=')
            {
                break; // 遇到等号，结束输入
            }

            scanf("%d", &b);

            // 按从左到右的顺序计算
            switch (shizi)
            {
            case '+':
                result += b;
                break;
            case '-':
                result -= b;
                break;
            case '*':
                result *= b;
                break;
            case '/':
                if (b == 0)
                {
                    printf("除数不能为零\n");
                    return 0;
                }

                result /= b;
                break;
            }
        }
    }

    printf("%d\n", result);
    return 0;
}
