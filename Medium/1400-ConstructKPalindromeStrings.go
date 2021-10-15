/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 1400. Construct K Palindrome Strings
   Language Go
   Level Medium
*/

func canConstruct(s string, k int) bool {
	var bs = [26]bool{false}
	c := 0
	for _, c := range s {
		bs[c-'a'] = !bs[c-'a']
	}
	for i := 0; i < len(bs); i++ {
		if bs[i] {
			c++
		}
	}
	return c <= k && k <= len(s)
}