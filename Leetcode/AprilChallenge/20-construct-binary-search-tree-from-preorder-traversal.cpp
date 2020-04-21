//Day 20 of Leetcode 30 days challenge, by Kartik Mohan
// Construct Binary Search Tree from Preorder Traversal
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
    int p=0;
    TreeNode* buildTree(vector<int> preorder,int min,int mx,int size)
    {
        if(p>=size) return NULL;
        TreeNode* root=NULL;
        int currPos=preorder[p];
        bool l=(min==-1 || currPos>min);
        bool r=(mx==-1 || currPos<mx);
        if(l && r)
        {
            root = new TreeNode(currPos);
            p++;
            root->left=buildTree(preorder,min,currPos,size);
            root->right=buildTree(preorder,currPos,mx,size);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        if(!n)
            return NULL;
        return buildTree(preorder,-1,-1,n);
    }
};
