/*

https://leetcode.com/problems/longest-common-prefix/

Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

找出字符串最长公共前缀。

*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        string ans=strs[0];
        int anslen=ans.length();
        for(int i=1;i<size;i++){
            for(int j=0;j<anslen;j++){
                if(ans[j]!=strs[i][j]){
                    anslen=min(anslen,j);
                    break;
                }
            }
            ans=ans.substr(0,anslen);
            if(anslen==0)
                return "";
        }
        return ans;
    }
};

/*
参考了评论区老哥的解法，还挺快的https://leetcode.com/problems/longest-common-prefix/discuss/391089/C%2B%2B-Easy-to-understand-solution-%3A-Using-sort
用sort有点套用的嫌疑，还是多动脑的好...
*/
