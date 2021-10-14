/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 279. Perfect Squares
   Language Go
   Level Easy
*/

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func numSquares(n int) int {
	var dp []int
	dp = append(dp, 0)
	for len(dp) <= n {
		m := len(dp)
		sq := 1<<7 - 1
		for i := 1; i*i <= m; i++ {
			sq = min(sq, dp[m-i*i]+1)
		}
		dp = append(dp, sq)
	}
	return dp[n]
}