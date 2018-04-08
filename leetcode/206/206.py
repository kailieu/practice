# https://leetcode.com/problems/reverse-linked-list/description/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return None

        def _reverse(l):
            if l.next is None:
                return l, l

            cur, head = _reverse(l.next)
            cur.next = l
            cur.next.next = None

            return cur.next, head

        _, ret_head = _reverse(head)

        return ret_head
