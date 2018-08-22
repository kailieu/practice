class Solution:
    def toLowerCase(self, s):
        """
        :type str: str
        :rtype: str
        """
        # return s.lower()
        ret = list()
        for ch in s:
            if ord(ch) < 97:
                ret.append(chr(ord(ch) + 32))
            else:
                ret.append(ch)

        return "".join(ret)
