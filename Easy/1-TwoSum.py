'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 1.Two Sum
    Language Python
    Level Easy
'''

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash_map = dict()
        for index, num in enumerate(nums):
            new_target = target - num
            if new_target not in hash_map:
                hash_map[num] = index
            else:
                return [index, hash_map[new_target]]