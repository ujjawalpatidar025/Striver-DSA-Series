class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0){
            return "";
        }
        string ans;
        ans+=s[0];
        int mx=1;
        
        for(int i=0;i<s.size();i++){
            int x=i-1,y=i+1;
            while(x>=0 && y<s.size()){
                if(s[x]==s[y]){
                    x--;
                    y++;
                }
                else break;
            }
            if(mx<(y-(x+1))){
                mx=y-(x+1);
                ans=s.substr(x+1,mx);
            }
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
              int x=i-1,y=i+2;
              while(x>=0 && y<s.size()){
                if(s[x]==s[y]){
                    x--;
                    y++;
                }
                else break;
            }
            if(mx<(y-(x+1))){
                mx=y-(x+1);
                ans=s.substr(x+1,mx);
            }
          }
        }
        return ans;
        
    }
};