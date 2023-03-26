class Solution {
public:
    int helper(TreeNode* root)
    {
        if(root==NULL)return 0;
        int l,r;
       
            l=1+helper(root->left);
        
       r=1+helper(root->right);

       return max(l,r);
    }
    int maxDepth(TreeNode* root) {
        return helper(root);
    }
};