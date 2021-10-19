'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 993. Cousins in Binary Tree
    Language Python
    Level Easy
'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def dfs(self, root, parent, depth, x, y, res):
        if not root:
            return
        if root.val == x or root.val == y:
            res.append((parent, depth))
        
        self.dfs(root.left, root, depth+1, x, y, res)
        self.dfs(root.right, root, depth+1, x, y, res)
        
    def isCousins(self, root: Optional[TreeNode], x: int, y: int) -> bool:
        res = []
        self.dfs(root, None, 0, x, y, res)
        x_info, y_info = res
        if x_info[0] != y_info[0] and x_info[1] == y_info[1]:
            return True
        return False