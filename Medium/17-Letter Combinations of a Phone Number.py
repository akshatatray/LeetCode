'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 17.Letter Combinations of a Phone Number
    Language Python
    Level Medium
'''

class Solution:
    
    def dfs(self, digits, path, res, mapping):
        if not digits:
            res.append(path)
            return
        for c in mapping[digits[0]]:
            self.dfs(digits[1:], path+c, res, mapping)
            
    
    def letterCombinations(self, digits: str) -> List[str]:
        if not digits:
            return []
        mapping = {
            "2":"abc",
            "3":"def",
            "4":"ghi",
            "5":"jkl",
            "6":"mno",
            "7":"pqrs",
            "8":"tuv",
            "9":"wxyz"
        }
        res = []
        self.dfs(digits, "", res, mapping)
        return res