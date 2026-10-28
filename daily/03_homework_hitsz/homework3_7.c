#include <stdio.h>

#define N 5

// 出生日期
typedef struct
{
    int year;
    int month;
    int day;
} Date;

// 职业状况
typedef struct
{
    char college[50];   // 所在学院
    char title[50];     // 职称
    char position[50];  // 职务
} JobStatus;

// 人员登记表
typedef struct
{
    char name[50];      // 姓名
    char sex[10];       // 性别
    Date birth;         // 出生日期
    JobStatus job;      // 职业状况
} Person;

int main(void)
{
    Person p[N];
    int i, max = 0;

    // 输入5名人员信息
    for (i = 0; i < N; i++)
    {
        scanf("%49s %9s %d %d %d %49s %49s %49s",
              p[i].name,
              p[i].sex,
              &p[i].birth.year,
              &p[i].birth.month,
              &p[i].birth.day,
              p[i].job.college,
              p[i].job.title,
              p[i].job.position);
    }

    // 找出年龄最大的
    for (i = 1; i < N; i++)
    {
        if (p[i].birth.year < p[max].birth.year ||
            (p[i].birth.year == p[max].birth.year && p[i].birth.month < p[max].birth.month) ||
            (p[i].birth.year == p[max].birth.year && p[i].birth.month == p[max].birth.month && p[i].birth.day < p[max].birth.day))
        {
            max = i;
        }
    }

    printf("%s\n", p[max].name);

    return 0;
}