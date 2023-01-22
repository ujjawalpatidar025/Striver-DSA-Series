class Solution
{
  public:
    long long int atmostKdistinct (string s, int k) {
    
        long long int beg = 0, end = 0, cnt = 0, dist_cnt = 0;
        vector<int> freq(26, 0);
        
        for(end=0; end<s.length(); end++){
           
            if(freq[s[end] - 'a'] == 0)
                dist_cnt++;
                
            freq[s[end] - 'a']++;
            
            
            while(beg < end && dist_cnt > k){
                
                freq[s[beg] - 'a']--;
                
                if(freq[s[beg] - 'a'] == 0)
                    dist_cnt--;
                    
                beg++;
            }
            
            if(dist_cnt <= k)
                cnt = cnt + (end - beg + 1);
        }
    	
    	return cnt;
    }
    
    long long int substrCount(string s, int k){
        
        return (atmostKdistinct(s, k) - atmostKdistinct(s, k-1));
    }
};