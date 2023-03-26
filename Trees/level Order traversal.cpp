class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL )return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>l;
            for(int i=0;i<n;i++)
            {
                TreeNode* c=q.front();
                q.pop();
                if(c->left!=NULL)q.push(c->left);
                if(c->right!=NULL)q.push(c->right);
                l.push_back(c->val);
            }
            ans.push_back(l);
        }
        return ans;
        
    }
};