class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        while(low<=high)
        {
             mid=(low+high)/2;

             if(mid==0){
                return nums[0];
            }
            else if(mid==nums.size()-1) return nums[nums.size()-1];
            else if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])return nums[mid];
            else if(nums[mid]==nums[mid-1]){
                if((mid-1)%2==0) low=mid+1;
                else high=mid-2;
            }
            else{
                if(mid%2==0) low=mid+2;
                else high=mid-1;
            }
        }
        return nums[mid];
        
    }
};