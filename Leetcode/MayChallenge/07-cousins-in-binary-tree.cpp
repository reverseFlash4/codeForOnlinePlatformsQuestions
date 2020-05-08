//Day 7 of Leetcode May Challenge, by Kartik Mohan
// Cousins in Binary Tree
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
    int d1,d2,p1,p2;
    void traverse(TreeNode* root, int d,int x,int y,int p)
    {
        if(root==NULL) return;
        if(root->val==x) d1=d,p1=p;
        if(root->val==y) d2=d,p2=p;
        traverse(root->left,d+1,x,y,root->val);
        traverse(root->right,d+1,x,y,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        d1=-1,d2=-1,p1=-1,p2=-1;
        traverse(root, 0, x, y, -1);
        if(d1==d2 && p1!=p2) return true;
        return false;
    }
};
