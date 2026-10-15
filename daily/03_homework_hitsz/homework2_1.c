//用函数编程计算两整数的最大值，在主函数中调用该函数计算并输出从键盘任意输入的两整数的最大值。

#include <stdio.h>

int getmax(int a, int b);

int main() {
    int num1, num2;
    
    printf("请输入两个整数: ");
    scanf("%d %d", &num1, &num2);
    
    int max= getmax(num1, num2);
    
    printf("最大值是: %d\n", max);
    return 0;
}

int getmax(int a, int b) {
    return (a > b) ? a : b;
}
