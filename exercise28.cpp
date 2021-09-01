/*

https://leetcode.com/problems/implement-strstr/

Implement strStr()

Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

模式匹配

*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        /*kmp*/
        const int patLen=needle.length();
        const int textLen=haystack.length();
        int* next=new int [patLen];
        next[0]=-1;
        int i=0,k=-1,j=0;
        while(i<patLen-1){
            if(k==-1||needle[i]==needle[k]){
                next[++i]=++k;
            }
            else{
                k=next[k];
            }
        }
        i=0;
        while(i<textLen&&j<patLen){
            if(j==-1||haystack[i]==needle[j]){
                i++;j++;
            }
            else{
                j=next[j];
            }
        }
        if(j==patLen)
            return i-j;
        else
            return -1;
    }
};

/*
经典KMP算法练习。
*/
