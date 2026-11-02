#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, m, x, y;
    if (scanf("%d %d %d %d", &n, &m, &x, &y) != 4)
    {
        return 0;
    }

    int block[21][21];
    long long dp[21][21];

    memset(block, 0, sizeof(block));
    memset(dp, 0, sizeof(dp));

    int dx[9] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
    int dy[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

    for (int k = 0; k < 9; k++)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)
        {
            block[nx][ny] = 1;
        }
    }

    dp[0][0] = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 && j == 0)
                continue;

            if (block[i][j])
            {
                dp[i][j] = 0;
                continue;
            }

            long long val = 0;
            if (i > 0)
                val += dp[i - 1][j];
            if (j > 0)
                val += dp[i][j - 1];
            dp[i][j] = val;
        }
    }

    printf("%lld\n", dp[n][m]);
    return 0;
}