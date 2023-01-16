int check(int mid,int n,int k,vector<int> &stalls)
    {
        int cnt=1;
        int x=stalls[0];
        for(int i=1;i<n;i++)
        {
            if(stalls[i]-x>=mid)
            {
            cnt++;
            x=stalls[i];
            }
            
            if(cnt==k)
            {
                return 1;
            }
        }
       
        return 0;
        
    }

 int solve(int n, int k, vector<int> &stalls) {
    
        
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[n-1]-stalls[0];
        int maxi=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(check(mid,n,k,stalls))
            {
            maxi=mid;
            low=mid+1;
            }
            else
            high=mid-1;
            
            
        }
        return maxi;
    }