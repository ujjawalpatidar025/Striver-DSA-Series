class Solution {
public:
    int romanToInt(string s) {
        int ans=0,i=0;
        for(i=s.size()-1;i>=1;i--)
        {
            if(s[i]=='V'&&s[i-1]=='I')
            {
                ans+=4;
                i--;
            }
            else if(s[i]=='X'&&s[i-1]=='I')
            {
                ans+=9;
                i--;
            }
            
            else if(s[i]=='L'&&s[i-1]=='X')
            {
                ans+=40;
                i--;
            }
            else if(s[i]=='C'&&s[i-1]=='X')
            {
                ans+=90;
                i--;
            }
            else if(s[i]=='D'&&s[i-1]=='C')
            {
                ans+=400;
                i--;
            }
            else if(s[i]=='M'&&s[i-1]=='C')
            {
                ans+=900;
                i--;
            }
            else if(s[i]=='D')
            ans+=500;
            else if(s[i]=='M')
            ans+=1000;
            else if(s[i]=='C')
            ans+=100;
            else if(s[i]=='L')
            ans+=50;
            else if(s[i]=='X')
            ans+=10;
            else if(s[i]=='V')
            ans+=5;
            else if(s[i]=='I')
            ans++;


        }
        if(i==0)
        {
            if(s[i]=='D')
            ans+=500;
            else if(s[i]=='M')
            ans+=1000;
            else if(s[i]=='C')
            ans+=100;
            else if(s[i]=='L')
            ans+=50;
            else if(s[i]=='X')
            ans+=10;
            else if(s[i]=='V')
            ans+=5;
            else if(s[i]=='I')
            ans++;
        }
        return ans;
        
    }
};