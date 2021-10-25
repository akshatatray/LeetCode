'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 451. Sort Characters By Frequency
    Language Python
    Level Medium
'''

class Solution:
    def frequencySort(self, s: str) -> str:
        hm = {}
        for char in s:
            if char in hm:
                hm[char] += 1
            else:
                hm[char] = 1
        new = dict(sorted(hm.items(), key = lambda item:item[1], reverse = True))
        temp = ''
        for char, freq in new.items():
            temp += (char*freq)
        return temp