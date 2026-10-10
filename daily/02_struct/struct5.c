#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// 结构体综合练习题--投票选举
int max(int a, int b, int c, int d);
int main(void)
{
    // 用随机数生成投票结果
    srand(time(NULL));

    struct spot
    {
        char name;
        int vote;
    };

    struct spot choices[4] = {{'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}};

    for (int i = 0; i < 80; i++)
    {
        int index = rand() % 4;
        choices[index].vote++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("选项%c的票数为:%d\n", choices[i].name, choices[i].vote);
    }

    if (choices[0].vote == choices[1].vote && choices[1].vote == choices[2].vote && choices[2].vote == choices[3].vote)
    {
        printf("票数相同,没有最高票数的景点\n");
    }
    else
    {
        int max_vote = max(choices[0].vote, choices[1].vote, choices[2].vote, choices[3].vote);
        for (int i = 0; i < 4; i++)
        {
            if (choices[i].vote == max_vote)
            {
                printf("票数最高的景点是:%c\n", choices[i].name);
            }
        }
    }

    return 0;
}

int max(int a, int b, int c, int d)
{
    int max_val = a;
    if (b > max_val)
        max_val = b;
    if (c > max_val)
        max_val = c;
    if (d > max_val)
        max_val = d;
    return max_val;
}