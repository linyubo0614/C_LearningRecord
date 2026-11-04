// #include <stdio.h>

// int main()
// {
//     int k;
//     scanf("%d",&k);

//     int n;
//     double sum=0;
//     for(n=1;sum<=k;n++)
//     {
//         sum+=(1/n);
//         printf("%d",n);
//     }

//     return 0;
// }

/**
 * 这题主要是区分整数除法和浮点数除法
 * 整数除法结果舍去小数部分
 * 浮点数除法则保留
 * 
 * 当/两边都是整数的时候是整数除法，否则是浮点数除法
 * 以下写法都是合法的：1.0/n，1/(double)n,1.0/(double)n
 * 
 * 另外注意不要把打印语句放在循环里面
*/
#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int n = 0;
    double sum = 0;

    while (sum <= k)
    {
        n++;
        sum += 1.0 / (double)n;
    }

    printf("%d\n", n);

    return 0;
}