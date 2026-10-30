#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int score[3] = {70,80,90};

    for(i =0; i<3; i++)
        printf("score[%d] = %d\n", i, score[i]);
    printf("\n");

    int *p1 = score;
    int *p2 = &score[0];
    int *p3 = p1+1;

    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    printf("\n");

    printf("*p1 = %d\n", *p1);
    printf("*p2 = %d\n", *p2);
    printf("*p3 = %d\n", *p3);

    return 0;

}
