#include <stdio.h>

//函数定义：n 是盘子数，source 是起始柱，auxiliary 是辅助柱，destination 是目标柱

void hanoi(int n, char source, char auxiliary, char destination) {
    //终止条件：如果只剩下一个盘子，直接移动到目标柱
    if (n == 1) {
        printf("Move disk from %c to %c\n", source, destination);
        return;
    }

    //1. 把目标柱和辅助柱互换，也就是要想把n个盘子都拿到c，相当于先把n-1个都拿到b（这时候B是目标柱）
    //   再把第n个拿到c，最后退化成n-1个盘子的汉诺塔问题（这时候目标柱是C，起始柱是B）。形成递归
    hanoi(n - 1, source, destination, auxiliary);
    
    //2. 将最底下的第 n 个盘子，从起始柱移到目标柱
    printf("Move disk from %c to %c\n", source, destination);
    
    //3. 将刚才移到辅助柱的 n-1 个盘子，移到最终目标目标柱
    hanoi(n - 1, auxiliary, source, destination);
}


int main() {
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=10);
    {
        hanoi(n, 'A', 'B', 'C');
    }
    return 0;
}