#include <stdio.h>

void change(void* p1,void* p2, int len);

int main(void)
{
    int a,b;
    a=1;
    b=2;
    change(&a,&b,4);
    printf("%d,%d",a,b);
    return 0;
}

void change(void* p1,void* p2, int len)
{
    char* pc1=p1;
    char* pc2=p2;

    char temp;

    for(int i;i<len;i++)
    {
        temp=*pc1;
        *pc1=*pc2;
        *pc2=temp;

        pc1++;
        pc2++;

    }
}