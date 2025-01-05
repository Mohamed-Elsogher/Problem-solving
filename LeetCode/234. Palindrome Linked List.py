# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: bool
        """
        stack = []
        current = head 
        while current :
            stack.append(current.val)
            current = current.next
        current = head
        while current:
            if(stack.pop() != current.val):
                return False
            current = current.next   
        return True              
