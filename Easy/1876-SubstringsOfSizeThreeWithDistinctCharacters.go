/*
    @author
    Akshat Atray
    LeetCode Problem 1876. Substrings of Size Three with Distinct Characters
	Language: Go
    Level Easy
*/

func countGoodSubstrings(s string) int {
	if len(s) < 3 {
		return 0
	}
	var res int = 0
	for i := 0; i < len(s)-2; i++ {
		if s[i] != s[i+1] && s[i+1] != s[i+2] && s[i+2] != s[i] {
			res++
		}
	}
	return res
}