/*

https://leetcode.com/problems/container-with-most-water/

Container With Most Water

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int h=min(height[i],height[j]);
            res=max(res,(j-i)*h);
            while(height[i]<=h&&i<j)
                i++;
            while(height[j]<=h&&i<j)
                j--;
        }
        return res;
    }
};
/*
代码来自Discuss,详见https://leetcode.com/problems/container-with-most-water/discuss/6090/Simple-and-fast-C%2B%2BC-with-explanation
*/
