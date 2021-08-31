/*

https://leetcode.com/problems/palindrome-number/

Palindrome Number

Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

给定一个数字，判断是否为回文数。

*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||x!=0&&x%10==0)
            return false;
        int check=0;
        while(x>check){
            check=check*10+x%10;
            x/=10;
        }
        return (x==check)||(x==check/10);
    }
};
/*
代码参考Discuss，只需判断一半，不会超限。
*/
