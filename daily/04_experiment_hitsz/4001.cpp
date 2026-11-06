#include <stdio.h>
#include <string.h>

int main()
{
    char num1[55] = {0};
    char num2[55] = {0};
    int a[55] = {0};
    int b[55] = {0};
    int ans[60] = {0};

    scanf("%s %s", num1, num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    for (int i = 0; i < len1; i++)
    {
        a[i] = num1[len1 - 1 - i] - '0';
    }
    for (int i = 0; i < len2; i++)
    {
        b[i] = num2[len2 - 1 - i] - '0';
    }

    int maxLen = (len1 > len2) ? len1 : len2;

    int jinwei = 0;

    for (int i = 0; i < maxLen; i++)
    {
        int sum = a[i] + b[i] + jinwei;
        ans[i] = sum % 10;
        // 新的进位
        jinwei = sum / 10;
    }

    if (jinwei > 0)
    {
        ans[maxLen] = jinwei;
        maxLen++;
    }

    for (int i = maxLen - 1; i >= 0; i--)
    {
        printf("%d", ans[i]);
    }
    printf("\n");

    return 0;
}