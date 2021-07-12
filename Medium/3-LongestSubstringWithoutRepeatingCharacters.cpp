/*
    @author
    Akshat Atray
    LeetCode Problem 3. Longest Substring Without Repeating Characters
    Level Medium
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> map;
        int windowStart = -1, maxLen = 0;
        for (int windowEnd = 0; windowEnd < s.size(); windowEnd++) {
            if (map.count(s[windowEnd]) != 0)
                windowStart = max(windowStart, map[s[windowEnd]]);
            map[s[windowEnd]] = windowEnd;
            maxLen = max(maxLen, windowEnd-windowStart);
        }
        return maxLen;
    }
};