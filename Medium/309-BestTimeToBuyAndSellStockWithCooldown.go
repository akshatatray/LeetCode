/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 309. Best Time to Buy and Sell Stock with Cooldown
   Language Go
   Level Easy
*/

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func maxProfit(prices []int) int {
	if len(prices) < 2 {
		return 0
	}
	var b0 int = -prices[0]
	b1 := b0
	s0, s1, s2 := 0, 0, 0
	for i := 1; i < len(prices); i++ {
		b0 = max(b1, s2-prices[i])
		s0 = max(s1, b1+prices[i])
		b1, s2, s1 = b0, s1, s0
	}
	return s0
}
