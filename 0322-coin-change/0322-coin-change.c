int min(int a, int b) {
    return a < b ? a : b;
}

int coinChange(int* coins, int coinsSize, int amount) {
    if (amount == 0) {
        return 0;
    }

    int i, j;
    int dp[coinsSize + 1][amount + 1];

    for (i = 0; i <= coinsSize; i++) {
        for (j = 0; j <= amount; j++) {
            dp[i][j] = INT_MAX - 1;
        }
    }

    for (i = 0; i <= coinsSize; i++) {
        dp[i][0] = 0;
    }

    for (i = 1; i <= coinsSize; i++) {
        for (j = 1; j <= amount; j++) {
            if (j >= coins[i - 1]) {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    if (dp[coinsSize][amount] == INT_MAX - 1) {
        return -1;
    }

    return dp[coinsSize][amount];
}