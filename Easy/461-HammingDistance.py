'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 461. Hamming Distance
    Language Python
    Level Easy
'''

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        bx = bin(x)[2:][::-1]
        by = bin(y)[2:][::-1]

        i = 0
        j = 0
        count = 0
        while i < len(bx) and j < len(by):
            if bx[i] != by[j]:
                count += 1

            i += 1
            j += 1

        while i < len(bx):
            if bx[i] != "0": 
                count += 1
            i += 1

        while j < len(by):
            if by[j] != "0": 
                count += 1
            j += 1

        return count