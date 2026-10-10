#include <stdio.h>
int main(void)
{
    int a =10;
    int b=50;

    int* p1=&a;
    int** p2=&p1;

//p2是二级指针,p2保存的是变量p1的地址
//将p2解码，也就是得到一级指针，将一级指针的数值改为b的地址

    *p2=&b;

    printf("a为:%d\n",a);
    printf("b为:%d\n",b);
    printf("a的地址为:%p\n",&a);
    printf("b的地址为:%p\n",&b);
    printf("p1为:%p\n",p1);
    printf("p2为:%p\n",p2);
    printf("这个输出的是一级指针对应的数字的数值为:%d\n",*p1);

}   