/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 1400. Construct K Palindrome Strings
   Language c++
   Level Medium
*/

class Solution {
public:
    bool canConstruct(string s, int k) {
        bitset<26> bs;
        for (auto& c : s)
            bs.flip(c-'a');
        return bs.count() <= k && k <= s.size();
    }
};