'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 92. Reverse Linked List II
    Language Python
    Level Medium
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        dummy = prev = ListNode(0)
        dummy.next = head
        
        for _ in range(left-1):
            prev = prev.next
        
        curr = prev.next
        node = None
        
        for _ in range(right-left+1):
            nxt = curr.next
            curr.next = node
            node = curr
            curr = nxt
        
        prev.next.next = curr
        prev.next = node
        
        return dummy.next