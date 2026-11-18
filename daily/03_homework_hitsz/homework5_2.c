#include <stdio.h>

int countSteps(int n) {
    if (n==1) return 0;
    if (n%2==0) return 1+countSteps(n/2);
    return 1+countSteps(3*n+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", countSteps(n));
    return 0;
}