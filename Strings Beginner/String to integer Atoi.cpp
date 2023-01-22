class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size()&&s[i]==' ')
        i++;
        if(i>=s.size())return 0;
        int sign=1;
      
        if(s[i]=='+')
        {
            sign=1;
            i++;
        }
        else if(s[i]=='-') 
        {
            sign=-1;
            i++;
        }

       
        //cout<<i<<endl;
        if(i>=s.size())return 0;
        long long int num=0;
        for(;i<s.size()&&s[i]>='0'&&s[i]<='9';i++)
        {
            if(num>INT_MAX/10||(num==INT_MAX/10&&s[i]-'0'>INT_MAX%10))
            return (sign==1)?INT_MAX:INT_MIN;
            num=(num*10)+(s[i]-'0');
        }
        long long ans=num*sign;
       
        return ans;
        
    }
};