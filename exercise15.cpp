/*

https://leetcode.com/problems/3sum/

 3Sum

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

第一题Two Sum的进阶版

*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int tgt=-nums[i];
            int front=i+1;
            int back=nums.size()-1;
            if(tgt<0)
                break;
            while(front<back){
                int sum=nums[front]+nums[back];
                if(sum<tgt)
                    front++;
                else if(sum>tgt)
                    back--;
                else{
                    vector<int>triplet(3,0);
                    triplet[0]=nums[i];
                    triplet[1]=nums[front];
                    triplet[2]=nums[back];
                    res.push_back(triplet);
                    while(front<back&&nums[front]==triplet[1])front++;
                    while(front<back&&nums[back]==triplet[2])back--;
                }
            }
            while(i+1<nums.size()&&nums[i+1]==nums[i])
                i++;
        }
        return res;
    }
};

/*
代码来自Discuss,借助了sort，可能不是最优解吧
*/
