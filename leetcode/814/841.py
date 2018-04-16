# https://leetcode.com/problems/binary-tree-pruning/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def pruneTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        def _pruneTree(root):
            if root is None:
                return False

            if _pruneTree(root.left):
                root.left = None

            if _pruneTree(root.right):
                root.right = None

            if root.left is None and root.right is None and root.val == 0:
                return True
            else:
                return False

        _pruneTree(root)
        if root.left is None and root.right is None and root.val == 0:
            return None

        return root

