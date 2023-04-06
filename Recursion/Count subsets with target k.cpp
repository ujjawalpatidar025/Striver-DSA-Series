class Solution{

	public:
	int mod = 1e9+7;
	int helper(int arr[],int n,int sum,int ind,vector<vector<int>>&dp)
	{
	     if(ind == n){
	        if(sum == 0) return 1;
	        return 0;
	    }
	    if(dp[ind][sum] != -1) return (dp[ind][sum]%mod);
	    
	    int pick=0;
	    int nonpick=helper(arr,n,sum,ind+1,dp);
	    if(arr[ind]<=sum)
	    pick=helper(arr,n,sum-arr[ind],ind+1,dp);
	    
	    
	    return dp[ind][sum]=(pick+nonpick)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n , vector<int>(sum+1 , -1));
        return helper(arr,n,sum,0,dp)%mod;
	}
	  
};