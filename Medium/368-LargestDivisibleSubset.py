'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 368. Largest Divisible Subset
    Language Python
    Level Medium
'''

class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        if nums == 1:
            return nums
        
        nums.sort()
        res = [[num] for num in nums]
        for i in range(len(nums)):
            for j in range(i):
                if nums[i]%nums[j] == 0 and len(res[i]) < len(res[j])+1:
                    res[i] = res[j] + [nums[i]]
        return max(res, key = len)