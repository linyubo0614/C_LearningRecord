//孪生素数问题

#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数，是返回1，否返回0
int is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0; // 排除偶数
    
    // 任何数分解成两个数之积，必定有其中一个小于该数的根号（反证很容易证明）
    for (int i = 3; i <= (int)sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int c, d;

    if (scanf("%d,%d", &c, &d) == 2) {
        int count = 0;
        // 遍历区间
        for (int i = c; i <= d - 2; i++) {
            if (is_prime(i) && is_prime(i + 2)) {
                printf("(%d,%d)", i, i + 2);
                count++;
            }
        }
        // 输出数量
        printf("\n%d\n", count);
    }
    return 0;
}