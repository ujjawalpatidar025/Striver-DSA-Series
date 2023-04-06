class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void helper(int target,vector<int> &candidates,vector<vector<int>> &ans,int index)
    {
       if(target==0)
        {
            ans.push_back(temp);
            return ;
        }

        for(int i=index;i<candidates.size();i++)
        {
            temp.push_back(candidates[i]);
            if(target-candidates[i]>=0)
               helper(target-candidates[i],candidates,ans,i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        helper(target,candidates,ans,0);
        return ans;
    }
};