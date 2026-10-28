#include <stdio.h>

int main(void)
{
    int grade[40]={0};
    int n = 0;

    // 获取学生成绩
    for (int i = 0; i < 40; i++)
    {
        printf("请输入第%d个学生的成绩: ", i + 1);
        int tmp;
        scanf("%d", &tmp) != 1;
        // 负数表示结束，不存入数组
        if (tmp < 0) 
        {
            break;
        }
        grade[n] = tmp;
        n++;
    }

    // 计算平均分
    int sum = 0;
    for (int i = 0; i < n; i++) sum += grade[i];
    double avg = (double)sum / n;

    // 统计高于平均分的人数
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (grade[i] > avg) cnt++;

    printf("高于平均分的人数: %d\n", cnt);
    return 0;
}