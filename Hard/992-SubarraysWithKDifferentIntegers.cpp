/*
    @author
    Akshat Atray
    LeetCode Problem 992. Subarrays with K Different Integers
    Level Hard
*/

class Solution {
public:
    int lngstSbStrKDst(vector<int> nums, int k) {
        int winStart=0, res=0;
        unordered_map<int, int> map;
        for (int winEnd=0; winEnd<nums.size(); winEnd++) {
            map[nums[winEnd]]+=;  
            while (map.size() > k) {
                map[nums[winStart]]--;
                if (map[nums[winStart]] == 0)
                    map.erase(nums[winStart]);
                winStart++;
            }
            res += winEnd-winStart;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int res=lngstSbStrKDst(nums, k) - lngstSbStrKDst(nums, k-1);
        return res;
    }
};