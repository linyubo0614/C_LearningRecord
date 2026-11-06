#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool is_word_exist(char words[][50], int count, const char *target)
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(words[i], target) == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char text[1000];
    char words[1000][50];
    int count = 0;

    fgets(text, 1000, stdin);

    char *p = text;
    char temp[50];

    while (*p != '\0')
    {
        while (*p != '\0' && !((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')))
        {
            p++;
        }
        if (*p == '\0')
            break;

        char *q = temp;
        while ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            *q = tolower(*p);
            p++;
            q++;
        }
        *q = '\0';

        if (!is_word_exist(words, count, temp))
        {
            strcpy(words[count], temp);
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}