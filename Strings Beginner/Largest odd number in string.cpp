class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int x=-1;
        for(int i=num.size();i>=0;i--)
        {
            if((num[i]-'0')%2)
            {
                x=i;
                break;
            }
        }
        for(int i=0;i<=x;i++)
        {
            ans+=num[i];
        }
        return ans;
        
    }
};