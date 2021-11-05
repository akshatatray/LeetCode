/*
    @author
    Akshat Atray
    Leetcode https://leetcode.com/akshatatray/
    Leetcode Problem 441. Arranging Coins
    Language C++
    Level Easy
*/

// BINARY SEARCH
class Solution {
public:
    int arrangeCoins(int n) {
        long l=0, r=n, k, cur;
        while (l <= r) {
            k = l+(r-l)/2;
            cur = k*(k+1)/2;
            if (cur == n) return (int)k;
            if (n < cur) r=k-1;
            else l=k+1;
        }
        return (int)r;
    }
};

//MATHEMATICS
class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(2*(long)n+0.25)-0.5);
    }
};