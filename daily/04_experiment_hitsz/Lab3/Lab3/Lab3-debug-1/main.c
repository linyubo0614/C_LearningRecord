#include <stdio.h>
int main()
{
    int a = 10;

    int *p = NULL;
    p = &a;

    printf("a is %d, &a is %p\n\n", a, &a);
    printf("p is %p, *p is %d, &p is %p\n",p, *p, &p);

    return 0;
}
