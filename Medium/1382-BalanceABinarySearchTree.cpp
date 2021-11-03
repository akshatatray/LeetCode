/*
   @author
   Akshat Atray
   Leetcode https://leetcode.com/akshatatray/
   LeetCode Problem 1382. Balance a Binary Search Tree
   Language C++
   Level Medium
*/

class Solution {
public:
    vector<TreeNode*> arr;
    TreeNode* balanceBST(TreeNode* root) {
        inOrder(root);
        return bstGen(0, arr.size()-1);
    }
    void inOrder(TreeNode* root) {
        if (!root) return;
        inOrder(root->left);
        arr.push_back(root);
        inOrder(root->right);
    }
    TreeNode* bstGen(int s, int e) {
        if (s > e) return nullptr;
        int m = s+(e-s)/2;
        TreeNode* root = arr[m];
        root->left = bstGen(s, m-1);
        root->right = bstGen(m+1, e);
        return root;
    }
};