#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100]="我";
    char str2[100]="爱";
    char str3[100]="雯静";
    // printf("%s\n",str1);
    // printf("%d\n",sizeof(str1));
    // printf("%d\n",strlen(str1));
    // //一个中文字符占3个字节，strlen计算的是字符串的长度，不包括'\0'，所以是12

    strcat(str1,str2);
    printf("%s\n",str1);
    strcat(str1,str3);
    printf("%s\n",str1);
    //效果是把后一个字符串拼接到前一个字符串的后面，前一个字符串必须有足够的空间来存放拼接后的字符串，否则会出现内存溢出的问题

}