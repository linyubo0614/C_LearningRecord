#include <stdio.h>
#include <string.h>

int main(void)
{
    // char str[]="hello world!";
    // str[0]='H';
    char* str="hello world!";
    // str[0]='H'; // 这里会报错，因为str是指针，指向的是常量字符串，不能修改
    printf("%s\n",str);
    printf("%d\n",sizeof(*str));
    //这时候str解指针只会得到第一个字符的大小，所以也就是一个字节
    printf("%d\n",strlen(str));
    //strlen计算的是字符串的长度，不包括'\0'，所以是12
    return 0;
}