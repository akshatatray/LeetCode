/*
   @author
   Akshat Atray
   Leetcode https://leetcode.com/akshatatray/
   LeetCode Problem 844. Backspace String Compare
   Language C++
   Level Easy
*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return getString(s) == getString(t);
    }
    string getString (string s) {
        stack<char> res;
        string str;
        for (auto c : s)
            if (c != '#') res.push(c);
            else if (!res.empty()) res.pop();
        while (!res.empty()) {
            char c = res.top(); res.pop();
            str += c;
        }
        return str;
    }
};