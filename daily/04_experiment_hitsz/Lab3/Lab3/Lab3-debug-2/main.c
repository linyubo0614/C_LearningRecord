#include <stdio.h>

void swap(int x, int y){
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int a = 11, b = 99;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
