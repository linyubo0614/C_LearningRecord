#include <stdio.h>
#include <stdlib.h>
#define N 100  // 定义数组大小

/*错误代码
void FindMax(int score[],long num[],int n, int pMaxScore, long pMaxNum)
{
   int    i;
   pMaxScore = score[0];
   pMaxNum = num[0];
   for (i=1; i<n; i++)
   {
	if (score[i] > pMaxScore)
	{
      	  pMaxScore = score[i];
   	  pMaxNum = num[i];
    	}
   }
}
*/

void FindMax(int score[],long num[],int n, int *pMaxScore, long *pMaxNum)
{
   int    i;
   *pMaxScore = score[0];
   *pMaxNum = num[0];
   for (i=1; i<n; i++)
   {
	if (score[i] > *pMaxScore)
	{
      	  *pMaxScore = score[i];
   	  *pMaxNum = num[i];
    	}
   }
}


int main()
{
    int score[N], maxScore;
    int n, i;
    long num[N], maxNum;
    printf("How many students?");
    scanf("%d", &n);
    printf("Input student's ID and score:\n");
    for (i=0; i<n; i++)
    {
        scanf("%ld%d", &num[i], &score[i]); /* 字母d前为字母1 */
    }

    //FindMax(score, num, n, maxScore, maxNum); /* 按值调用函数。错误代码 */
    FindMax(score, num, n, &maxScore, &maxNum);

    printf("maxScore = %d, maxNum = %ld\n", maxScore, maxNum);
    return 0;
}
