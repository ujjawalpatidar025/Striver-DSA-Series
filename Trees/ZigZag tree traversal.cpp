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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;

        if(root == NULL) return res;

        queue<TreeNode*>q;
        q.push(root);
        int cnt = -1;

        while(!q.empty())
        {
          int n = q.size();

          vector<int>l;

          for(int i = 0; i < n; ++i)
          {
            
            auto temp = q.front();
            q.pop();

            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);

            l.push_back(temp->val);

          }

          cnt++;
         
          if(cnt % 2 != 0) reverse(l.begin(),l.end());

          res.push_back(l);
          
        }

        return res;
        
    }
};