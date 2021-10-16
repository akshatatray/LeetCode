'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 518.Coin Change 2
    Language Python
    Level Medium
'''

class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        dp = [0]*(amount+1)
        dp[0] = 1
        for c in range(len(coins)):
            for i in range(coins[c], amount+1):
                dp[i] += dp[i-coins[c]]
        return dp[amount]