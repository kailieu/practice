# https://leetcode.com/problems/unique-morse-code-words/description/

class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        table = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        s = set()

        for word in words:
            s.add("".join(list(map(lambda ch: table[ord(ch)-ord('a')], word))))

        return len(s)
