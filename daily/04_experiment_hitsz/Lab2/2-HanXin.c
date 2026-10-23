#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,find=0;
    printf("before while\n");
    while(!find)
    {
        if(x%3==2 && x%5==3 && x%7==2)
        {
            printf("x = %d\n",x);
            find = 1;
            
        }
        x++;
       

        printf("in while:x=%d\n",x);
    }
    return 0;
}
