# https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

class Solution:
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0

        def _maxDepth(root, lv):
            if root is None:
                return lv - 1

            return max(
                _maxDepth(root.left, lv + 1),
                _maxDepth(root.right, lv + 1)
            )

        return _maxDepth(root, 1)
