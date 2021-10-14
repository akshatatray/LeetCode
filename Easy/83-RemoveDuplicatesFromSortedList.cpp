/*
    @author
    Akshat Atray
    LeetCode Problem 83. Remove Duplicates from Sorted List
    Level Easy
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr = head;
        while (ptr && ptr->next) {
            if (ptr->val == ptr->next->val) ptr->next = ptr->next->next;
            else ptr = ptr->next;
        }
        return head;
    }
};