/*

https://leetcode.com/problems/longest-palindromic-substring/

Longest Palindromic Substring

Given a string s, return the longest palindromic substring in s.

给定字符串s，返回最长回文。

*/

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)
            return s;
        int min_left=0,max_len=1,max_right=s.size()-1;
        for(int mid=0;mid<s.size();){
            int left=mid;
            int right=mid;
            while(right<max_right&&s[right+1]==s[right])
                right++;
            mid=right+1;
            while(right<max_right&&left>0&&s[right+1]==s[left-1]){
                right++;
                left--;
            }
            int new_len=right-left+1;
            if(new_len>max_len){
                min_left=left;
                max_len=new_len;
            }
        }
        return s.substr(min_left,max_len);
    }
};

/*
代码来自Discuss
*/
