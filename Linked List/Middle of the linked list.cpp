/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
            cnt++;
        }
        tail=head;
        int x=0;
        ListNode* ans;

        if(cnt%2==0)
        {
            cnt=cnt/2;
            while(cnt!=x)
            {
                tail=tail->next;
                x++;
            }
            ans=tail;
        }
        else
        {
            cnt=cnt/2+1;
            while(cnt!=x)
            {
                tail=tail->next;
                x++;
            }
            ans=tail;
        }

        return ans;
        
    }
};