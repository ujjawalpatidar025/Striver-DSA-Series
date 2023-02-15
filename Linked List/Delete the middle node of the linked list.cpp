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
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL)return NULL;
        if(head->next==NULL)
        return NULL;

        ListNode* temp=new ListNode();
        temp->next=head;
        ListNode* slow=temp;
        ListNode* fast=temp;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* tail=slow->next->next;
        slow->next=tail;

        return head;

        
        
    }
};