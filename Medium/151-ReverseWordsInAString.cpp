/*
    @author
    Akshat Atray
    Leetcode- https://leetcode.com/akshatatray/
    Leetcode Problem 151. Reverse Words in a String
    Language C++
    Level Medium
*/

class Solution {
public:
    string reverseWords(string &s) {
        int len=s.size(), i=0, j=0;
        while (i < len) {
            while (i < len && s[i] == ' ') i++;
            if (i < len && j > 0) s[j++] = ' ';
            int st = j;
            while (i < len && s[i] != ' ') s[j++] = s[i++];
            reverse(s.begin()+st, s.begin()+j);
        }
        s.resize(j);
        reverse(s.begin(), s.end());
        return s;
    }
};