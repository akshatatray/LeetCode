'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 38.Count and Say
    Language Python
    Level Medium
'''

class Solution:
    def countAndSay(self, n: int) -> str:
        ans = '1'
        if n == 1:
            return ans
        for i in range(2, n+1):
            j, count = 0, 0
            curr, temp = '', ''
            while j < len(ans):
                if curr == '':
                    curr = ans[j]
                    count += 1
                    j += 1
                elif curr == ans[j]:
                    count += 1
                    j += 1
                else:
                    temp += str(count) + curr
                    curr = ''
                    count = 0
            temp += str(count) + curr
            ans = temp
        return ans