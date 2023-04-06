class Solution
{
public:
    vector<int>res;
    void helper(vector<int> &arr,int ind,int N,int ans)
    {
        if(ind==N)
        {
            res.push_back(ans);
            return;
        }
        
        
        helper(arr,ind+1,N,ans);
        helper(arr,ind+1,N,ans+arr[ind]);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int ans=0;
        helper(arr,0,N,ans);
        return res;
    }
};