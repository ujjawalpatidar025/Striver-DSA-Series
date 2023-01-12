class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int x=-1,y=-1;
        vector<int>ans(2,-1);
        int f=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target&&f==0)
            {
                ans[0]=i;
                f=1;

            }
            if(nums[nums.size()-i-1]==target&&c==0)
            {
                ans[1]=nums.size()-i-1;
                c=1;
            }
        }
        return ans;
        
    }
};