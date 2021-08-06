/*

https://leetcode.com/problems/two-sum/

TWO SUM
Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, 
where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2


第一题 TWO SUM
给定一组数，找到两个数加起来等于目标值 

*/


#include<bits/stdc++.h>
using namespace std;

vector<int> violentsolve(vector<int> array,int target){
	vector<int> ans;
	for(int i=0;i<array.size();i++){
		for(int j=i+1;j<array.size();j++){
			if(array.at(i)+array.at(j)==target){
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}
	return ans;
}

vector<int> aftersort(vector<int> &array,int target){
	vector<int> ans;
	vector<int> carray(array);
	sort(carray.begin(),carray.end());
	int front=0,back=carray.size()-1;
	int sum=carray[front]+carray[back];
	while(sum!=target){
		if(sum>target){
			back--;
		}
		else{
			front++;
		}
		sum=carray[front]+carray[back];
	}
	for(int pos1=0;pos1<array.size();pos1++){
		if(array[pos1]==carray[front]){
			int flaga=0;
			for(int i=0;i<ans.size();i++){
				if(ans[i]==pos1){
					flaga=1;
				}
			}
			if(flaga==0)
				ans.push_back(pos1);
		}
		if(array[pos1]==carray[back]){
			int flaga=0;
			for(int i=0;i<ans.size();i++){
				if(ans[i]==pos1){
					flaga=1;
				}
			}
			if(flaga==0)
				ans.push_back(pos1);
		}
	}
	return ans;
}

int main(){
	vector<int> array,ans;
	int len,temp,target;
	cin>>len;
	for(int i=0;i<len;i++){
		cin>>temp;
		array.push_back(temp);
	}
	cin>>target;
	//ans=violentsolve(array,target);
	ans=aftersort(array,target);
	cout<<ans.at(0)<<" "<<ans.at(1)<<endl;
	//cout<<array.at(1)<<endl;
	return 0;
}
