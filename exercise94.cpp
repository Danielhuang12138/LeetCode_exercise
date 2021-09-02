/*

https://leetcode.com/problems/binary-tree-inorder-traversal/

Binary Tree Inorder Traversal

Given the root of a binary tree, return the inorder traversal of its nodes' values.

二叉树先序遍历。

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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int>ans;
        while(root||!s.empty()){
            while(root){
                s.push(root);
                root=root->left;
            }
            root=s.top();
            s.pop();
            ans.push_back(root->val);
            root=root->right;
        }
        return ans;
    }
};

/*
先序遍历
*/
