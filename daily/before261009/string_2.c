#include <stdio.h>
#include <string.h>

int main(void)
{
    //实现键盘录入字符串并且组成数组,并且遍历数组
    char str[100];
    printf("请输入字符串:\n");
    scanf("%s",str);
    //接下来对数组进行遍历
    //遍历方法1
    // for(int i=0;i<=strlen(str)-1;i++)
    // {
    //     printf("%c\n",str[i]);
    // }
    // return 0;

    //遍历方法2
    char* p =str;
    //这里的p是一个指针，指向的是数组的首地址，也就是str[0]的地址
    while(1)
    {
        char c=*p;
        //这里的c是一个字符变量，保存的是指针p指向的地址的值，也就是数组的元素
        //最初p指向的是str[0]的地址，所以c的值就是str[0]的值，也就是第一个字符
        if(c=='\0')
        {
            break;
        }
        printf("%c\n",c);

        p++;
        //这里的p++是让指针p指向下一个地址，也就是str[1]的地址，下一次循环就会打印第二个字符
    }


}