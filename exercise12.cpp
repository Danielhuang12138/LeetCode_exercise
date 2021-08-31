/*

https://leetcode.com/problems/integer-to-roman/

Integer to Roman

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
Given an integer, convert it to a roman numeral.

数字转罗马数字。

*/

class Solution {
public:
    string intToRoman(int num) {
        string a;
        while(num/1000!=0){
            a.push_back('M');
            num-=1000;
        }
        while(num/900!=0){
            a.append("CM");
            num-=900;
        }
        while(num/500!=0){
            a.append("D");
            num-=500;
        }
        while(num/400!=0){
            a.append("CD");
            num-=400;
        }
        while(num/100!=0){
            a.append("C");
            num-=100;
        }
        while(num/90!=0){
            a.append("XC");
            num-=90;
        }
        while(num/50!=0){
            a.append("L");
            num-=50;
        }
        while(num/40!=0){
            a.append("XL");
            num-=40;
        }
        while(num/10!=0){
            a.append("X");
            num-=10;
        }
        while(num/9!=0){
            a.append("IX");
            num-=9;
        }
        while(num/5!=0){
            a.append("V");
            num-=5;
        }
        while(num/4!=0){
            a.append("IV");
            num-=4;
        }
        while(num!=0){
            a.append("I");
            num-=1;
        }
        return a;
    }
};

/*
感觉很低效...https://leetcode.com/problems/integer-to-roman/discuss/6382/My-simple-cpp-solution的解决办法更好。
*/
