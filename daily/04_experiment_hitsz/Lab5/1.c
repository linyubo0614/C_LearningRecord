/*
#include <stdio.h>

typedef struct date
{
    int year;
    int month;
    int day;
} DATE;

typedef struct student
{
    long studentID;
    char studentName[10];
    char studentSex;
    DATE birthday;       // ← 结构体类型成员（不是指针）
    int score[4];
} STUDENT;

int main()
{
    STUDENT stu1;

    stu1.studentID = 100310121;

    // 访问嵌套结构体成员 → 用 .
    stu1.birthday.year  = 1991;
    stu1.birthday.month = 5;
    stu1.birthday.day   = 19;

    printf("Birthday: %d-%02d-%02d\n",
           stu1.birthday.year,
           stu1.birthday.month,
           stu1.birthday.day);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct date
{
    int year;
    int month;
    int day;
} DATE;

typedef struct student
{
    long studentID;
    char studentName[10];
    char studentSex;
    DATE *birthday;      // ← 结构体指针成员
    int score[4];
} STUDENT;

int main()
{
    STUDENT stu1;

    // 为指向的结构体分配内存
    stu1.birthday = (DATE *)malloc(sizeof(DATE));

    // 结构体指针 → 用 ->
    stu1.birthday->year  = 1991;
    stu1.birthday->month = 5;
    stu1.birthday->day   = 19;

    //错误写法
    /*
    printf("Birthday: %d-%02d-%02d\n",
           stu1.birthday.year,
           stu1.birthday.month,
           stu1.birthday.day);
    */
    //正确写法

    printf("Birthday: %d-%02d-%02d\n",
       stu1.birthday->year,
       stu1.birthday->month,
       stu1.birthday->day);


    free(stu1.birthday);
    return 0;
}
