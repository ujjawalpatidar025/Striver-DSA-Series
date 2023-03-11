class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        map<int,int>mp;
        Node *temp=head;
        while(temp!=NULL)
        {
            mp[temp->data]++;
            //cout<<temp->data;
            temp=temp->next;
        }
        temp=head;
        vector<pair<int,int>>ans;
        while(temp->next!=NULL)
        {
            int c=target-temp->data;
            if(mp[c]==1&&c!=temp->data)
            {
                if(c<temp->data)
                ans.push_back({c,temp->data});
                else
                {
                    ans.push_back({temp->data,c});
                }
                mp[c]=0;
                mp[temp->data]=0;
            }
            temp=temp->next;
        }
        return ans;
    }
};