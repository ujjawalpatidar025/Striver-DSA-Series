class Solution {
public:
    int maxDepth(string s) {
        
        int ans=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            st.push(s[i]);
            if(s[i]==')')
            {
                int x=st.size();
                ans=max(ans,x);
                st.pop();
            }
        }
        return ans;
    }
};