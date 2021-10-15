'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 14.LongestCommonPrefix
    Language Python
    Level Easy
'''

# divide and conquer
class Solution:
    
    def commonPrefix(self, lcp_left, lcp_right):
        minimum = min(len(lcp_left), len(lcp_right))
        for i in range(minimum):
            if lcp_left[i] != lcp_right[i]:
                return lcp_left[:i]
        return lcp_left[:minimum]
    
    def longestCommonPrefixTwo(self, strs, l ,r):
        if l == r:
            return strs[l]
        else:
            mid = (l + r)//2
            lcp_left = self.longestCommonPrefixTwo(strs, l, mid)
            lcp_right = self.longestCommonPrefixTwo(strs, mid+1, r)
            return self.commonPrefix(lcp_left, lcp_right)
    
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0 or strs == None: return ''
        return self.longestCommonPrefixTwo(strs, 0, len(strs)-1)