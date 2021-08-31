/*

https://leetcode.com/problems/string-to-integer-atoi/

String to Integer (atoi)

Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

Read in and ignore any leading whitespace.
Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
Read in next the characters until the next non-digit charcter or the end of the input is reached. The rest of the string is ignored.
Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
Return the integer as the final result.
Note:

Only the space character ' ' is considered a whitespace character.
Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.

字符串转数字。

*/

class Solution {
public:
    int myAtoi(string s) {
        int i=0,sym=1,ans=0;
        while(s[i]==' ')
            i++;
        if(s[i]=='-'||s[i]=='+'){
            if(s[i]=='-')
                sym*=-1;
            else
                sym*=1;
            i++;
        }  
        while(s[i]>='0'&&s[i]<='9'){
            if(ans>INT_MAX/10||(ans==INT_MAX/10&&s[i]-'0'>7)){
                if(sym==1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            ans=ans*10+(s[i++]-'0');
        }
        return ans*sym;
    }
};

/*
7不能算magic number吧，2147483647最后一位不是正好是7吗，不知道老外都怎么想的...
*/
