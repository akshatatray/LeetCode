/*
   @author
   Akshat Atray
   Leetcode- https://leetcode.com/akshatatray/
   LeetCode Problem 123. Best Time to Buy and Sell Stock III
   Language C++
   Level Hard
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b1=INT_MAX, b2=INT_MAX, s1=0, s2=0;
        for (int i=0; i<prices.size(); i++) {
            b1 = min(b1, prices[i]);
            s1 = max(s1, prices[i]-b1);
            b2 = min(b2, prices[i]-s1);
            s2 = max(s2, prices[i]-b2);
        }
        return s2;
    }
};