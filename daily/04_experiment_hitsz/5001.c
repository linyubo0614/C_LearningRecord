#include <stdio.h>

typedef struct
    {
        int score[25];
        float final_score;
    } student;

int main()
{
    // 学生人数
    int n;
    // 评委人数
    int m;
    scanf("%d %d",&n,&m);

    student stu[105];
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        // 录入所有打分
        for(int j=0;j<m;j++)
        {
            scanf("%d",&stu[i].score[j]);
            sum+=stu[i].score[j];
        }

        // 找出最高分和最低分
        int max_score=stu[i].score[0];
        int min_score=stu[i].score[0];
        for(int k=0;k<m;k++)
        {
            if((stu[i].score[k])>max_score){
                max_score=stu[i].score[k];
            }

            if((stu[i].score[k])<min_score)
            {
                min_score=stu[i].score[k];
            }
        }
        stu[i].final_score=(double)(sum-max_score-min_score)/(m-2);
        
    }


    float final_max=stu[1].final_score;
    for(int i=1;i<=n;i++)
    {
        if(stu[i].final_score>final_max)
        {
            final_max=stu[i].final_score;
        }
    }

    printf("%.2f",final_max);
}