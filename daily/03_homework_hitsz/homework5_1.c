#include <stdio.h>

#define SIZE 1000

typedef struct
{
    char data[SIZE];
    int top;
} Stack;

void push(Stack *s, char ch)
{
    s->top++;
    s->data[s->top] = ch;
}

char pop(Stack *s)
{
    return s->data[s->top--];
}

int main()
{
    Stack s;
    char str[SIZE];
    int i = 0;
    s.top = -1;

    fgets(str, SIZE, stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        push(&s, str[i]);
        i++;
    }
    while (s.top != -1)
    {
        printf("%c", pop(&s));
    }
    printf("\n");
    return 0;
}
