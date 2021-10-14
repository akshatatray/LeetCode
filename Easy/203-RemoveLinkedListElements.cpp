/*
    @author
    Akshat Atray
    LeetCode Problem 203. Remove Linked List Elements
    Level Easy
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return head;
        while (head && head->val == val) head = head->next;
        ListNode* ptr = head;
        while (ptr && ptr->next) {
            if (ptr->next->val == val) ptr->next = ptr->next->next;
            else ptr = ptr->next;
        }
        return head;
    }
};