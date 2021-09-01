/*

https://leetcode.com/problems/3sum-closest/submissions/

 3Sum Closest
 
 Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

3Sum简化版？

*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int tgt=nums[0]+nums[1]+nums[2];
        if(tgt==target)
            return tgt;
        sort(nums.begin(),nums.end());
        for(int first=0;first<nums.size()-2;first++){
            if(first>0&&nums[first]==nums[first-1])continue;
            int second=first+1;
            int third=nums.size()-1;
            while(second<third){
                int sum=nums[first]+nums[second]+nums[third];
                if(sum==target)return sum;
                if(abs(target-sum)<abs(target-tgt))
                    tgt=sum;
                if(sum>target){
                    --third;
                }
                else{
                    second++;
                }
            }
        }
        return tgt;
    }
};
/*
为了节省时间，直奔评论区，但是好像只有O(n^2)解法
*/
