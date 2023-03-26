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
    int ans=0;
    int helper(TreeNode* root)
    {
        if(root==NULL)return 0;
        int l=helper(root->left);
       
        int r=helper(root->right);
        ans=max(ans,l+r);

        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
       
       int d=helper(root);
       return ans;
        
    }
};