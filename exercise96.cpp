/*

https://leetcode.com/problems/unique-binary-search-trees/

Unique Binary Search Trees

Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

*/
class Solution {
public:
    int numTrees(int n) {
        vector<int> f;
        f.push_back(1);
        for(int i=1;i<=n;i++){
            int t=0;
            for(int j=0;j<i;j++){
                t+=f[j]*f[i-j-1];
            }
            f.push_back(t);
        }
        return f.back();
    }
};

/*
没太看懂，原文是这么解释的。
Consider f_i:

choose 1 as the root, we have 0 node for the left tree, i-1 for the
right;
choose 2 as the root, we have 1 node for the left tree, i-2 for the
right;
...
choose i as the root, we have i-1 nodes for the left tree, 0 for the
right.
Therefore, the recursive solution is f_i = \sum_{j=0}^{i-1} f_j f_{i-j-1}

*/
