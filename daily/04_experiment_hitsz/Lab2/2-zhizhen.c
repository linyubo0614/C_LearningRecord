#include <stdio.h>
#include <stdlib.h>
void fun(int a[], int num)
{
    a[2] = 4;
}

int main()
{
    int a[3] = {1,2,3};
    fun(a,3);
    for(int i =0; i<3;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
