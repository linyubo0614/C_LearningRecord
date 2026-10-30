#include <stdio.h>

int main(void) {
    int m;
    if (scanf("%d", &m) != 1) return 0;

    // 表示座位是否已占用
    // 设置为21，0占位
    int occupied[21][5] = {0};
    char names[5] = {'A', 'B', 'C', 'D', 'F'};

    for (int q = 0; q < m; q++) {
        int k;
        scanf("%d", &k);

        int found = 0;
        // 连坐的第一个行列
        int startRow;
        int startCol;

        // 1.优先找同一排连续 k 个空座位
        for (int r = 1; r <= 20 && !found; r++) 
        {
            for (int s = 0; s <= 5 - k; s++) 
            {
                int ok = 1;
                for (int t = 0; t < k; t++) 
                {
                    if (occupied[r][s + t]) 
                    {
                        ok = 0;
                        break;
                    }
                }
                if (ok) {
                    startRow = r;
                    startCol = s;
                    found = 1;
                    break;
                }
            }
        }

        int printed = 0;

        if (found) 
        {
            // 安排在同一排连续座位
            for (int t = 0; t < k; t++) {
                occupied[startRow][startCol + t] = 1;
                if (printed) 
                {
                    printf(" ");
                }
                printf("%d%c", startRow, names[startCol + t]);
                printed = 1;
            }
        } 

        // 2.否则安排编号最小的 k 个空座位
        else 
        {
            int need = k;
            // 逐个检索空座位
            for (int r = 1; r <= 20 && need > 0; r++)
            {
                for (int s = 0; s < 5 && need > 0; s++) 
                {
                    if (!occupied[r][s]) 
                    {
                        occupied[r][s] = 1;
                        if (printed) 
                        {
                            printf(" ");
                        }
                        printf("%d%c", r, names[s]);
                        printed = 1;
                        need--;
                    }
                }
            }
        }

        printf("\n");
    }

    return 0;
}