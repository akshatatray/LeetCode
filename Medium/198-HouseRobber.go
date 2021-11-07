/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 198. House Robber
   Language Go
   Level Medium
*/

func max(a, b int) int {
	if a > b {
		return a
	} else {
		return b
	}
}
func rob(nums []int) int {
	pre, curr := 0, 0
	for _, i := range nums {
		tmp := max(pre+i, curr)
		pre = curr
		curr = tmp
	}
	return curr
}