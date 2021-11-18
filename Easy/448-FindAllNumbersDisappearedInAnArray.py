'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 448. Find All Numbers Disappeared in an Array
    Language Python
    Level Easy
'''

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)):
            m = abs(nums[i]) - 1
            if nums[m] > 0:
                nums[m] = -nums[m]
        
        res = []
        for j in range(len(nums)):
            if nums[j] > 0:
                res.append(j+1)
                
        return res