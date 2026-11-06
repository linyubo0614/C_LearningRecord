#include <stdio.h>

int main()
{
    char arr[100];
    fgets(arr, 100, stdin);

    for (int i = 0; arr[i] != '\0' && arr[i] != '\n'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            if (arr[i] == 'z')
            {
                arr[i] = 'a';
            }
            else
            {
                arr[i] = arr[i] + 1;
            }
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            if (arr[i] == 'Z')
            {
                arr[i] = 'A';
            }
            else
            {
                arr[i] = arr[i] + 1;
            }
        }
    }

    printf("%s\n", arr);
    return 0;
}