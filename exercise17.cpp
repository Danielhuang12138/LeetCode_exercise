/*

https://leetcode.com/problems/letter-combinations-of-a-phone-number/

Letter Combinations of a Phone Number

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

详见leetcode

*/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        const int len = digits.length();
        vector<string>charset={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        if(digits.empty())return {};
        ans.push_back("");
        for(int i=0;i<len;i++){
            if(digits[i]<'2')
                continue;
            vector<string>temp;
            string candidate=charset[digits[i]-'0'];
            for(int j=0;j<candidate.size();j++){
                for(int k=0;k<ans.size();k++){
                    temp.push_back(ans[k]+candidate[j]);
                }
            }
            ans.swap(temp);
        }
        return ans;
        
    }
};

/*
改编自Discuss，结合了三个人的写法，迭代法
*/
