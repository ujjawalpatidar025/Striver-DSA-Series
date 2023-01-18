class Solution {
public:
    bool rotateString(string a, string b) {
        if(a.size()!=b.size()){
          return false;
      }
        if(a==b){
            return true;
        }
        int len = b.size();
        while(len--){
            if(a==b){
                return true;
            }
            a= a.substr(1) + a[0]; 
            
        }
        
        return false;
        
    }
};