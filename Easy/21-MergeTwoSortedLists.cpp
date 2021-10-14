/*
    @author
    Akshat Atray
    Leetcode- https://leetcode.com/akshatatray/
    LeetCode Problem 83. Remove Duplicates from Sorted List
    Language C++
    Level Easy
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        while (l1 && l2) {
            if (l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        if (l1) curr->next = l1;
        else curr->next = l2;
        return dummy->next;
    }
};