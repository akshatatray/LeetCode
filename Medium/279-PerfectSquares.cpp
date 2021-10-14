/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 279. Perfect Squares
   Language C++
   Level Easy
*/

class Solution {
public:
    int numSquares(int n) {
        static vector<int> dp {0};
        while (dp.size() <= n) {
            int m = dp.size(), sq = INT_MAX;
            for (int i=1; i*i<=m; ++i)
                sq = min(sq, dp[m-i*i]+1);
            dp.push_back(sq);
        }
        return dp[n];
    }
};