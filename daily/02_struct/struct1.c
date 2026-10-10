#include <stdio.h>
#include <string.h>

// 创建结构体存储三个学生的姓名，性别，班级，并且实现遍历数组
struct Student
{
    char name[20];
    char gender[6];
    int class;
};

int main(void)
{
    struct Student student1;
    strcpy(student1.name, "林毅煊");
    strcpy(student1.gender, "男");
    student1.class = 2;

    struct Student student2;
    strcpy(student2.name, "蔡炫凯");
    strcpy(student2.gender, "男");
    student2.class = 2;

    struct Student student3 = {"许焕新", "男", 18};

    struct Student stuArr[3] = {student1, student2, student3};

    for (int i = 0; i < 3; i++)
    {

        struct Student temp;
        temp = stuArr[i];
        printf("学生信息:姓名为%s,  性别为%s,  班级为%d", temp.name, temp.gender, temp.class);
        printf("\n");
    }
}