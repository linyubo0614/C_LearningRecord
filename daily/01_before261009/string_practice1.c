#include <stdio.h>
#include <string.h>

int main(void)
{
    //实现登录功能，且只有三次机会
    char username[20];
    char password[20];
    int count=0;
    while(count<3)
    {
        printf("请输入用户名和密码：");
        scanf("%s %s",username,password);
        if(strcmp(username,"admin")==0 && strcmp(password,"123456")==0)
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("登录失败\n");    
            count++;
        }
    }
    if(count==3)
    {
        printf("三次机会已用完\n");
    }

}