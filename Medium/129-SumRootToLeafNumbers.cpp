/*
   @author
   Akshat Atray
   Leetcode https://leetcode.com/akshatatray/
   LeetCode Problem 129. Sum Root to Leaf Numbers
   Language C++
   Level Medium
*/

class Solution {
public:
    int sumNumbers(TreeNode* r, int s=0) {
        if (!r) return 0;
        if (!r->right && !r->left) return s*10+r->val;
        return sumNumbers(r->right, s*10+r->val) + sumNumbers(r->left, s*10+r->val);
    }
};
