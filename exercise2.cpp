#include<bits/stdc++.h>
using namespace std;
/*

https://leetcode.com/problems/add-two-numbers/

ADD TWO NUMBERS

You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit.
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

给定两个用链表储存的数组，对两个链表相加得出结果。 

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    public:
    	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        	ListNode *p=l1;
        	ListNode *q=l2;
        	ListNode *ans=new ListNode;
        	ListNode *ans_t=ans;
        	int step=0;
        	while(p&&q){
        		ListNode *t=new ListNode;
        		t->val=(p->val+q->val+step)%10;
        		step=(p->val+q->val+step)/10;
        		ans_t->next=t;
        		ans_t=t;
        		p=p->next;
        		q=q->next;
			}
			while(p){
				ListNode *t=new ListNode;
				t->val=(p->val+step)%10;
				step=(p->val+step)/10;
				ans_t->next=t;
				ans_t=t;
				p=p->next;
			}
			while(q){
				ListNode *t=new ListNode;
				t->val=(q->val+step)%10;
				step=(q->val+step)/10;
				ans_t->next=t;
				ans_t=t;
				q=q->next;
			}
			if(step){
				ListNode *t=new ListNode;
				t->val=step;
				ans_t->next=t;
			}
			return ans->next;
    	}
};


/*

Runtime: 28 ms, faster than 68.43% of C++ online submissions for Add Two Numbers.
Memory Usage: 71.6 MB, less than 10.97% of C++ online submissions for Add Two Numbers.

*/

