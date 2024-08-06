class Solution {
public:
    bool isValid(string s) {
        // create a stack to store the opening parentheses
        stack<char> stk;
        
        // iterate through the string
        for (char c : s) {
            // if we encounter an opening parenthesis, push it onto the stack
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            }
            // if we encounter a closing parenthesis...
            else {
                // if the stack is empty, then this is an invalid parenthesis
                if (stk.empty()) {
                    return false;
                }
                // pop the top element off the stack
                char top = stk.top();
                stk.pop();
                
                // if the top element doesn't match the closing parenthesis, then this is an invalid parenthesis
                if (c == ')' && top != '(') {
                    return false;
                }
                if (c == ']' && top != '[') {
                    return false;
                }
                if (c == '}' && top != '{') {
                    return false;
                }
            }
        }
        // if the stack is not empty at the end, then this is an invalid parenthesis
        return stk.empty();
    }
};