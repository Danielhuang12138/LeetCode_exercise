/*

https://leetcode.com/problems/merge-two-sorted-lists/

Merge Two Sorted Lists

Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

合并链表。

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ll1=l1;
        ListNode *ll2=l2;
        ListNode *res;
        if(ll1&&ll2){
            if(ll1->val<ll2->val){
                res=ll1;
                ll1=ll1->next;
            }
            else{
                res=ll2;
                ll2=ll2->next;
            }
        }
        else if(ll1){
            res=ll1;
            ll1=ll1->next;
        }
        else if(ll2){
            res=ll2;
            ll2=ll2->next;
        }
        else
            res=NULL;

        ListNode *head=res;
        while(ll1&&ll2){
            if(ll1->val<ll2->val){
                res->next=ll1;
                ll1=ll1->next;
            }
            else{
                res->next=ll2;
                ll2=ll2->next;
            }
            res=res->next;
        }
        while(ll1){
            res->next=ll1;
            ll1=ll1->next;
            res=res->next;
        }
        while(ll2){
            res->next=ll2;
            ll2=ll2->next;
            res=res->next;
        }
        return head;
    }
};
/*
感觉写麻烦了，不过凑合
*/
