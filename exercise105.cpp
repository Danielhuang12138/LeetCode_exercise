/*

https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

Construct Binary Tree from Preorder and Inorder Traversal

Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

通过先序遍历结果和中序遍历结果重新构建树

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIdx=0;
        return build(preorder,inorder,rootIdx,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int&rootIdx,int left,int right){
        if(left>right) return NULL;
        int pivot=left;
        while(inorder[pivot]!=preorder[rootIdx]) pivot++;
        rootIdx++;
        TreeNode* newNode = new TreeNode(inorder[pivot]);
        newNode->left=build(preorder,inorder,rootIdx,left,pivot-1);
        newNode->right=build(preorder,inorder,rootIdx,pivot+1,right);
        return newNode;
    }
};

/*
用了递归，说不定可以用栈来模拟递归过程？
*/
