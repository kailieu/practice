# https://leetcode.com/problems/word-pattern/description/

class Solution:
    def wordPattern(self, pattern, string):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        d_w = dict()
        d_p = dict()
        s = string.split(' ')
        if len(pattern) != len(s):
            return False

        for i, word in enumerate(s):
            if d_p.get(pattern[i]) is None and d_w.get(word) is None:
                d_p[pattern[i]] = word
                d_w[word] = pattern[i]
                continue
            else:
                p = d_w.get(word)
                w = d_p.get(pattern[i])
                if p != pattern[i] or w != word:
                    return False
        
        return True
