class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        for char in ransomNote:
            index = magazine.find(char)
            if index == -1:
                return False
            # Remove the character from magazine
            magazine = magazine[:index] + magazine[index + 1:]
        return True