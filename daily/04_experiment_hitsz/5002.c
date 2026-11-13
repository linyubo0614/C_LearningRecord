#include <stdio.h>
#include <string.h>

typedef struct{
    char name[25];
    char number[15];
    char gender;
}student;

int main()
{
    student stu[1005];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %c",stu[i].name,stu[i].number,&stu[i].gender);
    }

    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        char info1[25];
        char info2[15];
        scanf("%s %s",info1,info2);
        char gender1=0;
        char gender2=0;
        for(int j=0;j<n;j++)
        {
            if(!strcmp(info1,stu[j].name)|| !strcmp(info1,stu[j].number))
            {
                gender1=stu[j].gender;
            }
            if(!strcmp(info2,stu[j].name)|| !strcmp(info2,stu[j].number))
            {
                gender2=stu[j].gender;
            }
        }

        if(gender1==gender2)
        {
            printf("N\n");
        }
        else{
            printf("Y\n");
        }

    }

    return 0;

}