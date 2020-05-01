//Day 30 of Leetcode 30 days challenge, by Kartik Mohan
// Check If a String Is a Valid Sequence from Root to Leaves Path in a Binary Tree

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
    bool checkValid(TreeNode* root, int pos, int n, vector<int>& a)
    {
        if(root==NULL) return false;
        if(pos==n-1)
        {
            if(root->val==a[pos] && root->left==NULL && root->right==NULL) return true;
            return false;
        }
        if(root->val==a[pos])
        {
            bool l=checkValid(root->left,pos+1,n,a);
            bool r=checkValid(root->right,pos+1,n,a);
            if(l || r) return true;
        }
        return false;
    }
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        int n=(int)arr.size();
        return checkValid(root,0,n,arr);
    }
};
