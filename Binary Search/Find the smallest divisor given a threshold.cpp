int check(vector<int>& nums, double mid)
{
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        ans+=ceil(nums[i]/mid);
    }
    return ans;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            double mid=(low+high)/2;
            if(check(nums,mid)>threshold)
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return low;
        
    }