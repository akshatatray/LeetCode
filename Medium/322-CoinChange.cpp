/*
    @author
    Akshat Atray
    Leetcode- https://leetcode.com/akshatatray/
    Leetcode Problem 322.Coin Change
    Language C++
    Level Medium
*/

// SOLUTION 1
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for (int i=1; i<=amount; ++i)
            for (auto c : coins)
                if (c <= i)
                    dp[i] = min(dp[i], dp[i-c]+1);
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};

// SOLUTION 2
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for (int i=0; i<coins.size(); ++i)
            for (int j=coins[i]; j<=amount; ++j)
                dp[j] = min(dp[j], dp[j - coins[i]]+1);
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};