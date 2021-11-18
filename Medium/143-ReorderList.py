'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 143. Reorder List
    Language Python
    Level Medium
'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        
        slow = head
        fast = head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        mid = slow.next
        slow.next = None
        
        tail = None
        while mid:
            nxt = mid.next
            mid.next = tail
            tail = mid
            mid = nxt
        
        start = head
        while tail:
            temp = tail.next
            tail.next = start.next
            start.next = tail
            start = start.next.next
            tail = temp