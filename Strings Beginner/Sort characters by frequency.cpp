class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        vector<pair<int,char>>v;
        for(int i=0;i<s.size();i++)
        mp[s[i]]++;

        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }

        sort(v.rbegin(),v.rend());
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].first;j++)
            ans+=v[i].second;

            //cout<<v[i].first;
        }
        return ans;
        
    }
};