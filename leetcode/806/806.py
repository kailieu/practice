# https://leetcode.com/problems/number-of-lines-to-write-string/description/

class Solution:
    def numberOfLines(self, widths, S):
        """
        :type widths: List[int]
        :type S: str
        :rtype: List[int]
        """
        line_count = 0
        cursor = 0

        for ch in S:
            new = widths[ord(ch) - ord('a')]

            if cursor + new > 100:
                line_count += 1
                cursor = new
            else:
                cursor += new

        if cursor > 0:
            line_count += 1

        return [line_count, cursor]
