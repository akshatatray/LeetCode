/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 154. Find Minimum in Rotated Sorted Array II
   Language C++
   Level Hard
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1, m;
        while (l < h) {
            m = l + (h - l)/2;
            if (nums[m] > nums[h]) l = m+1;
            else if (nums[m] < nums[h]) h = m;
            else h--;
        }
        return nums[l];
    }
};