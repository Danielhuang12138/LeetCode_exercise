/*

https://leetcode.com/problems/remove-nth-node-from-end-of-list/

Remove Nth Node From End of List

Given the head of a linked list, remove the nth node from the end of the list and return its head.

删除链表中从后往前数第n个节点。

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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode**t1=&head,*t2=head;
        for(int i=1;i<n;i++){
            t2=t2->next;
        }
        while(t2->next!=NULL){
            t1=&((*t1)->next);
            t2=t2->next;
        }
        *t1=(*t1)->next;
        return head;
    }
};

/*
代码来自Discuss，二级指针真的太精妙了，难以理解
*/
