# https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution:
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        d = dict()
        for i in nums:
            if d.get(i) is None:
                d[i] = 1
            else:
                d[i] += 1

        return sorted(d, key=lambda i: d[i], reverse=True)[0:k]


