/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 496. Next Greater Element I
   Language C++
   Level Easy
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> mp;
        vector<int> res;
        for (auto n : nums2) {
            while (s.size() && s.top() < n) {
                mp[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        for (auto n : nums1)
            res.push_back(mp.count(n) ? mp[n] : -1);
        return res;
    }
};