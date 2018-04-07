# https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        ret_head = None
        ret = None
        prev = cur = head
        while prev is not None:
            while cur is not None and prev.val == cur.val:
                cur = cur.next

            if ret_head is None:
                ret_head = ListNode(prev.val)
                ret = ret_head
            else:
                ret.next = ListNode(prev.val)
                ret = ret.next

            prev = cur

        return ret_head

