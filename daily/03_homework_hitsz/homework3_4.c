#include <stdio.h>

//计算指针p指向的字符串的长度（实际字符个数）

unsigned int MyStrelen(char p[])
{
    unsigned int len;
    len = 0;
    for (; p[len] != '\0';)
    {
        len++;
    }
    return len;
}

int main(void)
{
    char s[100];

    scanf("%99s", s);
    printf("%u\n", MyStrelen(s));

    return 0;
}