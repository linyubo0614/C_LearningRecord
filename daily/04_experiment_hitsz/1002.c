// 三天打渔，两天晒网

#include <stdio.h>

int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    // 检查输入的合法性
    if (year < 1990 || month < 1 || month > 12 || day < 1 ||(month == 2 && day > (is_leap_year(year) ? 29 : 28)) || (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 || day > 31)
    {
        printf("Invalid input\n");
        return 0;
    }

    // 计算从1990年1月1日到指定日期的天数
    int days = 0;

    // 计算年份的天数
    for (int y = 1990; y < year; y++)
    {
        days += is_leap_year(y) ? 366 : 365;
    }

    // 每个月的天数
    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 如果是闰年，2月有29天
    if (is_leap_year(year))
    {
        month_days[1] = 29;
    }

    // 计算月份的天数
    for (int m = 1; m < month; m++)
    {
        days += month_days[m - 1];
    }

    // 加上当前月份的天数
    days += day-1; // 减去1，因为1990年1月1日是第0天

    // 判断是打渔还是晒网
    if (days % 5 < 3)
    {
        printf("working\n");
    }
    else
    {
        printf("rest\n");
    }

    return 0;
}