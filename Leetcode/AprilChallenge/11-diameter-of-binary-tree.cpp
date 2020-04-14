//Day 11 of Leetcode 30 days challenge, by Kartik Mohan
// Diameter of binary tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int l,r;
        l= diameterOfBinaryTree(root->left);
        r= diameterOfBinaryTree(root->right);
        return max(height(root->left)+height(root->right),max(l,r));
    }
};
