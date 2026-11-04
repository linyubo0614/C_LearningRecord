#include <stdio.h>

int main()
{
    int apples[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &apples[i]);
    }
    int high;
    scanf("%d", &high);

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (apples[i] <= high + 30)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}