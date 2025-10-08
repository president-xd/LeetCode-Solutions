class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> reverse;
        for (int i = s.size() - 1; i >= 0; i--){
            reverse.push_back(s[i]);
        }
        s = reverse;
    }
};
