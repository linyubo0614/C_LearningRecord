#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    char *p, *q, temp;
    puts("Please enter a string:");
    gets(str);
    p = str;
    q = str + strlen(str) - 1;
    while (p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    puts(str);
    return 0;
}
