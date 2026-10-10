#include <stdio.h>
#include <string.h>

int main (void)
{
  //实现计算字符串中大小写字母个数
  char str[100];
  printf("请输入一个字符串：");
  scanf("%s",str);
  char str1[100];
  char str2[100];
  strcpy(str1,str);
  strcpy(str2,str);
  strupr(str1);//大写的字符串
  strlwr(str2);//小写的字符串

  //统计大写字母个数
  int bigcount=0;
  for(int i=0;i<=strlen(str)-1;i++)
  {
    if(str1[i]==str[i])
    {
        bigcount++;
    }
  }
  //统计小写字母个数
  int smallcount=0;
  for(int i=0;i<=strlen(str)-1;i++)
  {
    if(str2[i]==str[i])
    {
        smallcount++;
    }

    printf("原字符串中有%d个大写字母，%d个小写字母",bigcount,smallcount);
  }

  return 0;


}