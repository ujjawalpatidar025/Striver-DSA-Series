class Solution {
public:
     void f(TreeNode* root, vector<int>& v) {
        if (root==NULL) return;     
        v.push_back(root->val);     
        f(root->left, v);   
        f(root->right, v);   
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        f(root, v);
        return v;
    }
};