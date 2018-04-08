# https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution:
    def findKthLargest(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        k_sorted = sorted(nums, reverse=True)
        return k_sorted[k-1]

