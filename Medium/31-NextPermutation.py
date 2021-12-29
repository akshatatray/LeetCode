'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 31. Next Permutation
    Language Python
    Level Medium
'''

class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = j = len(nums)-1;
        while i!=0 and nums[i-1] >= nums[i]:
            i-=1;
        
        # strictly decreasing case
        if i == 0:
            nums.reverse();
            return;
        
        k = i-1;
        while nums[j] <= nums[k]:
            j-=1;
        nums[k], nums[j] = nums[j], nums[k];
        
        l, r = k+1, len(nums)-1;
        while l < r:
            nums[l], nums[r] = nums[r], nums[l];
            l+=1;
            r-=1;