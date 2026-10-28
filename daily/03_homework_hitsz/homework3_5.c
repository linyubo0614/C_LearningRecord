#include <stdio.h>
#include <string.h>

int main(void)
{
    char *week[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    char s[32];
    int i;
    int found = -1;

    scanf("%31s", s);

    // 逐个检索
    for (i = 0; i < 7; i++)
    {
        if (strcmp(s, week[i]) == 0)
        {
            found = i;
            break;
        }
    }

    // 如果没找到
    if (found == -1)
        printf("Error\n");
    else
        printf("%d\n", found);

    return 0;
}