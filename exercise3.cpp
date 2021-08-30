/*

https://leetcode.com/problems/longest-substring-without-repeating-characters/

Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

����һ���ַ���s���ҵ�������Ĳ��ظ��Ӵ� �� 


*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int maxlen=0,start=-1;
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]>start)
                start=hash[s[i]];
            hash[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};


/*

Runtime: 15 ms, faster than 62.46% of C++ online submissions for Add Two Numbers.
Memory Usage: 8.3 MB, less than 71.94% of C++ online submissions for Longest Substring Without Repeating Characters. 
*/
