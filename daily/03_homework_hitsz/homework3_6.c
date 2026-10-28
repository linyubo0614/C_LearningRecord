#include <stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
} Date;

typedef struct
{
    char college[50];   // 学院
    char title[50];     // 职称
    char position[50];  // 职务 
} JobStatus;

typedef struct
{
    char name[50];      // 姓名
    char sex[10];       // 性别
    Date birth;         // 出生日期
    JobStatus job;      // 职业状况
} Person;

int main(void)
{
    Person p;
    return 0;
}