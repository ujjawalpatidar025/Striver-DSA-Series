class Solution {
public:
    set<vector<int>>st;
    void helper(vector<int>& nums,int ind,vector<int>temp)
    {
        if(ind==nums.size())
        {
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }

        helper(nums,ind+1,temp);
        temp.push_back(nums[ind]);
        helper(nums,ind+1,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        helper(nums,0,temp);
       for(auto i:st)
       {
           ans.push_back(i);
       }

       return ans;
    }
};