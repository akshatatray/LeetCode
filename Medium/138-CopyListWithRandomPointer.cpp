/*
    @author
    Akshat Atray
    LeetCode Problem 138. Copy List with Random Pointer
    Level Medium
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;
        
        Node *ptr = head;
        while (ptr != nullptr) {
            Node *newNode = new Node(ptr->val, ptr->next, nullptr);
            ptr->next = newNode;
            ptr = newNode->next;
        }
        
        ptr = head;
        while (ptr != nullptr) {
            ptr->next->random = ptr->random != nullptr ? ptr->random->next : nullptr;
            ptr = ptr->next->next;
        }
        
        Node *old=head, *newNode=head->next, *newHead=head->next;
        while (old != nullptr) {
            old->next = old->next->next;
            newNode->next = newNode->next != nullptr ? newNode->next->next : nullptr;
            old = old->next;
            newNode = newNode->next;
        }
        return newHead;
    }
};