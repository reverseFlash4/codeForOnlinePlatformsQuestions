//Day 29 of Leetcode 30 days challenge, by Kartik Mohan
// Binary Tree Maximum Path Sum

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
    int ans=INT_MIN;
    int findMaxPath(TreeNode *root){
        if(root == NULL) return 0;
        int l = findMaxPath(root->left);
        int r = findMaxPath(root->right);
        if(root->left && root->right) ans = max(ans,max(l,r));
        else if(root->left) ans = max(ans,l);
        else if(root->right) ans = max(ans,r);
        ans = max(ans,l+r+root->val);
        ans = max(ans,max(l,r)+root->val);
        ans = max(ans,root->val);
        return max(root->val + max(l,r),root->val);
    }
    
    int maxPathSum(TreeNode* root) {
        ans=INT_MIN;
        findMaxPath(root);
        return ans;
    }
};
