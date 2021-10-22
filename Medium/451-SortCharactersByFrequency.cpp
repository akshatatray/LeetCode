/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 451. Sort Characters By Frequency
   Language C++
   Level Medium
*/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto& ch : s) mp[ch]++;
        priority_queue <pair<int, int>> pq;
        for (auto& m : mp) pq.push({m.second, m.first});
        string res="";
        while (!pq.empty()) {
            res += string(pq.top().first, pq.top().second);
            pq.pop();
        }
        return res;
    }
};
