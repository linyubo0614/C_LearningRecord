#include <stdio.h>
#include <string.h>

typedef struct GameRole
{
    char name[50];
    int attack;
    int defend;
    int blood;
} GR;

int main(void)
{
    GR role1 = {"aaa", 1, 100, 100};
    GR role2 = {"bbb", 100, 1, 1};
    GR role3 = {"ccc", 50, 50, 50};

    GR roleArr[3] = {role1, role2, role3};

    for (int i = 0; i < 3; i++)
    {
        GR temp = roleArr[i];
        printf("%s  %d  %d  %d\n", temp.name, temp.attack, temp.defend, temp.blood);
    }
}