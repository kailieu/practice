# https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/

class Solution:
    def maxIncreaseKeepingSkyline(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        n = len(grid)
        max_row = [0] * n
        max_col = [0] * n

        for r in range(0, n):
            max_row[r] = max(grid[r])
            for c in range(0, n):
                max_col[r] = max(max_col[r], grid[c][r])

        ret = 0
        new_grid = [[0] * n for i in range(n)]
        for r in range(0, n):
            for c in range(0, n):
                new_grid[r][c] = min(max_row[r], max_col[c])
                ret += new_grid[r][c] - grid[r][c]

        return ret
