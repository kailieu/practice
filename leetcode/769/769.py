# https://leetcode.com/problems/max-chunks-to-make-sorted/description/

class Solution:
    def maxChunksToSorted(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        n = len(arr)
        last = 0
        visit = [False] * n
        count = 0

        for i,v in enumerate(arr):
            visit[v] = True
            if all(visit[last:i+1]):
                count += 1
                last = i + 1

        return count
