/*
    @author
    Akshat Atray
    LeetCode Problem 206. Reverse Linked List
    Level Easy
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* curr = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return curr;
    }
};