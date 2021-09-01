/*

https://leetcode.com/problems/valid-parentheses/

Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

括号匹配

*/

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty())
                    return false;
                switch(s[i]){
                    case ')':if(st.top()!='(')return false;else break;
                    case ']':if(st.top()!='[')return false;else break;
                    case '}':if(st.top()!='{')return false;else break;
                    default :return false;
                }
                st.pop();

            }
        }
        if(!st.empty())
            return false;
        return true;
    }
};
/*
借助栈实现括号匹配，感觉挺高效的。
*/
