#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[5][100]={
        "hello",
        "world",
        "this",
        "is",
        "test"
    };

    for(int i=0;i<5;i++)
    {
        char* p=str[i];
        printf("%s\n",p);
    }
    return 0;
}