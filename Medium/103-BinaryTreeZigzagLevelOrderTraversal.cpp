/*
    @author
    Akshat Atray
    LeetCode Problem 103. Binary Tree Zigzag Level Order Traversal
    Level Medium
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> que;
        que.push(root);
        int i=0;
        while (que.size()) {
            i++;
            int qsize=que.size();
            vector<int> v;
            for (int i=0; i<qsize; i++) {
                auto temp = que.front();
                que.pop();
                v.push_back(temp->val);
                if (temp->left)
                    que.push(temp->left);
                if (temp->right)
                    que.push(temp->right);
            }
            if (i%2==0)
                reverse(v.begin(), v.end());
            res.push_back(v);
        }
        return res;
    }
};