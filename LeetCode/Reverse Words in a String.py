class Solution(object):
    def reverseWords(self, s):
        reverse = " ".join(s.split()[::-1])
        return reverse
