/*

https://leetcode.com/problems/rotate-array/

Rotate Array

Given an array, rotate the array to the right by k steps, where k is non-negative.

给定数组，进行旋转。

*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

/*
评论区看到的，太妙了，但是资源开销不小
*/
