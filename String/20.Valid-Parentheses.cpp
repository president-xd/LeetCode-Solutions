class Solution {
public:
    bool isValid(string s) {
        stack <char> Stack;
        
        for (char str: s){
            if (str == '(' || str == '{' || str == '['){
                Stack.push(str);
            } else {
                if (Stack.empty()) return false;
                char top = Stack.top();
                Stack.pop();
                if (str == ')' && top != '(' ||
                 str == '}' && top != '{' ||
                 str == ']' && top != '['){
                    return false;
                } 
            }
        }

        return Stack.empty();

    }
};