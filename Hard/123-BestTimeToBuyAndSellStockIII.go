/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 123. Best Time to Buy and Sell Stock III
   Language Go
   Level Hard
*/

func maxProfit(prices []int) int {
	b1, b2, s1, s2 := 1<<63-1, 1<<63-1, 0, 0
	for i := 0; i < len(prices); i++ {
		b1 = min(b1, prices[i])
		s1 = max(s1, prices[i]-b1)
		b2 = min(b2, prices[i]-s1)
		s2 = max(s2, prices[i]-b2)
	}
	return s2
}

func min(a, b int) int {
	if a > b {
		return b
	}
	return a
}
func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}