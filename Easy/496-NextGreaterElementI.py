'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 496.Next Greater Element I
    Language Python
    Level Easy
'''

class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res = []
        
        
        for num in nums1:
            flag = False
            for j in range(nums2.get(num)+1, len(nums2)):
                if nums2[j] > num:
                    res.append(nums2[j])
                    flag = True
                    break

            if flag == False:
                res.append(-1)
        return res