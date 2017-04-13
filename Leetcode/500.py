class Solution(object):
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        row1 = set("qwertyuiop")
        row2 = set("asdfghjkl")
        row3 = set("zxcvbnm")
        result = []
        for word in words:
            word_l = word.lower()
            word_s = set(word_l)
            if not any(word_s - row1) or not any(word_s - row2) or not any(word_s - row3):
                result.append(word)
        return result
