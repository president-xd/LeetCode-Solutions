class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """

        for i in range (0, len(needle)):
            if haystack.find(needle) >= 0:
                return haystack.find(needle)
            else:
                return -1 