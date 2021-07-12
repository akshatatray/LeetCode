/*
    @author
    Akshat Atray
    LeetCode Problem 86. Partition List
    Level Medium
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *before, *beforeHead, *after, *afterHead;
        after = afterHead = new ListNode(0);
        before = beforeHead = new ListNode(0);
        while (head != nullptr) {
            if (head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        after->next = nullptr;
        before->next = afterHead->next;
        return beforeHead->next;
    }
};