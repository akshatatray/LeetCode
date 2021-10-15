'''
    @author
    Prajjwal Maurya
    Leetcode- https://leetcode.com/pmaurya6jun/
    Leetcode Problem 2. Add Two Numbers
    Language Python
    Level Medium
'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        # create ans linked list with initial 0 value
        answer = ListNode(0)
        answer_tail = answer
        carry = 0
        while l1 or l2 or carry:
            
            num1 = l1.val if l1 else 0
            num2 = l2.val if l2 else 0
            carry, res = divmod(num1 + num2 + carry, 10)
            
            answer_tail.next = ListNode(res)
            answer_tail = answer_tail.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        
        return answer.next