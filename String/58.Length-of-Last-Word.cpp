class Solution {
public:
    int lengthOfLastWord(string s) {
        int number = 0;
        bool foundWord = false;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (foundWord) {
                    break;
                }
            } else {
                foundWord = true;
                number++;
            }
        }
        
        return number;
    }
};