class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        string strin = "", reverse = "";
        
        for (int i = 0; i < size; i++){
            if (iswalnum(s[i])){
                strin += tolower(s[i]); 
            }
        }
        for (int i = size - 1; i >= 0; i-- ){
            if (iswalnum(s[i])){
                reverse += tolower(s[i]);
            }
        }


        return reverse == strin;
    }
        
};