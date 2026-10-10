#include <stdio.h>
#include <string.h>

// 学习结构体作为函数参数的使用
// 以及复习指针修改函数外的值

typedef struct Student
{
    char name[20];
    int age;
} STU;

void ageplus(STU *stu);

int main(void)
{
    STU stu1 = {"林雯静", 19};
    printf("她的名字是：%s,年龄是:%d\n", stu1.name, stu1.age);
    ageplus(&stu1);
    printf("她的名字是：%s,年龄是:%d\n", stu1.name, stu1.age);
}

void ageplus(STU *st)
{
    printf("请输入学生的名字:\n");
    // 这里*st是结构体变量，.name是结构体变量的成员，
    // 因为name是一个数组，所以*st.name是一个数组名，数组名就是数组的首地址，所以这里不需要取地址符号
    scanf("%s", (*st).name);
    printf("请输入学生的年龄:\n");
    // 这里st是一个指针，*st是结构体变量，.age是结构体变量的成员，&((*st).age)是取结构体变量的成员的地址，所以需要取地址符号
    scanf("%d", &((*st).age));
}