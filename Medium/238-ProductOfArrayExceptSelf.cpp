/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 238. Product of Array Except Self
   Language C++
   Level Medium
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(), b=1, l=1;
        vector<int> res(n, 1);
        for(int i=0; i<n; ++i){
            res[i] *= b;
            b *= nums[i];
            res[n-1-i] *= l;
            l *= nums[n-1-i];
        }
        return res;
    }
};