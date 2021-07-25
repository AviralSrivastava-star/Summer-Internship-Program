Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
Example 4:

Input: s = "([)]"
Output: false
Example 5:

Input: s = "{[]}"
Output: true
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
  
  
  
  
  class Solution {
public:
    bool isValid(string s) {
        int i=s.length()-1;
        vector<char> stack;
        while(i>=0){
            if(stack.size() == 0)
                stack.push_back(s[i]);
            else if(s[i] == '(' && stack[stack.size()-1] == ')')
                stack.pop_back();
            else if(s[i] == '[' && stack[stack.size()-1] == ']')
                stack.pop_back();
            else if(s[i] == '{' && stack[stack.size()-1] == '}')
                stack.pop_back();
            else 
                stack.push_back(s[i]);
            i--;
        }
        if(stack.size() == 0)
            return true;
        return false;
    }
};
