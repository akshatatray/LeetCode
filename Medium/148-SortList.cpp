/*
    @author
    Akshat Atray
    LeetCode Problem 148. Sort List
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
    ListNode* getMidNode (ListNode * head) {
        ListNode *slow=head, *fast=head->next, *mid;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        mid = slow->next;
        slow->next = nullptr;
        return mid;
    }
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
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *mid = getMidNode(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        return mergeTwoLists(left, right);
    }
};