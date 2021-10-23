/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 154. Find Minimum in Rotated Sorted Array II
   Language Go
   Level Hard
*/

func findMin(nums []int) int {
	l, r, m, min := 0, len(nums)-1, 0, nums[0]
	for l <= r {
		m = (l + r) / 2
		if nums[m] > nums[l] {
			if nums[l] < min {
				min = nums[l]
			}
			l = m + 1
		} else {
			l++
		}
		if nums[m] < min {
			min = nums[m]
		}
	}
	return min
}