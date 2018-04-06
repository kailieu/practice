class Solution:
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True

        def _isBalanced(root, lv):
            if root is None:
                return lv - 1, True

            l_depth, l_ret = _isBalanced(root.left, lv + 1)
            r_depth, r_ret = _isBalanced(root.right, lv + 1)

            ret = (l_ret and r_ret)
            if ret and abs(l_depth - r_depth) > 1:
                ret = False

            return max(l_depth, r_depth), ret

        lv, ret = _isBalanced(root, 1)

        return ret
