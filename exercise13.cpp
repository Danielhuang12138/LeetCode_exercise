/*

https://leetcode.com/problems/roman-to-integer/submissions/

Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

罗马数字转数字。

*/

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        const int len=(int)s.length();
        for(int i=0;i<len;i++){
            if(i<(len-1)&&romanCharToInt(s[i])<romanCharToInt(s[i+1]))
                ans-=romanCharToInt(s[i]);
            else
                ans+=romanCharToInt(s[i]);
        }
        return ans;
        
    }
    int romanCharToInt(char c){
        switch(c){
            case 'I':   return 1;
            case 'V':   return 5;
            case 'X':   return 10;
            case 'L':   return 50;
            case 'C':   return 100;
            case 'D':   return 500;
            case 'M':   return 1000;
            default:    return 0;
        }
    }
};

/*
代码来自Discuss，查表是真的快https://leetcode.com/problems/roman-to-integer/discuss/6811/My-easy-to-understand-C%2B%2B-solutions
*/
