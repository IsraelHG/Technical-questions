#include "climbStairs.h"
#include <iostream>

int Solution::climbStairs(int n) {
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        cout << dp[i - 1] << " + " << dp[i - 2] << " = " << dp[i] << endl;
    }
    return dp[n];
}