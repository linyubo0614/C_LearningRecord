#include <stdio.h>
#include <string.h>

int main(void)
{
    //学习结构体嵌套
    typedef struct message
    {
        char email[100];
        int phone;
    } MSG;

    typedef struct Student
    {
        char name[20];
        int age;
        MSG message;
    } STU;

    STU stu1={"林毅煊", 18, {"john@example.com", 54321}};
    return 0;
}