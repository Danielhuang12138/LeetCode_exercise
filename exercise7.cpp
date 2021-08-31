/*

https://leetcode.com/problems/reverse-integer/

Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

给定32位int数，返回倒序数，越界返回0

*/

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            if(ans>0&&ans>(INT_MAX-x%10)/10||ans<0&&ans<(INT_MIN-x%10)/10)
                return 0;
            ans=ans*10+x%10;
            x/=10;
        }
        return ans;
    }
};

/*
2016之后，leetcode会对越界行为报错，故要在越界前结束操作。
*/
