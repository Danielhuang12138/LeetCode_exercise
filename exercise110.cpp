/*

https://leetcode.com/problems/balanced-binary-tree/

Balanced Binary Tree

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

检查平衡二叉树

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
    int dfsHeight(TreeNode*root){
        if(root==NULL) return 0;
        int leftHeight = dfsHeight(root->left);
        if(leftHeight==-1) return -1;
        int rightHeight = dfsHeight(root->right);
        if(rightHeight==-1) return -1;
        if(abs(leftHeight-rightHeight)>1) return -1;
        return max(leftHeight,rightHeight)+1;
    }
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root)!=-1;
    }
};

/*
代码来自Discuss，使用了DFS方法。
*/
