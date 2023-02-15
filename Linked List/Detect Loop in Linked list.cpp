class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode *a=head;
        ListNode *b=head;
        int f=0;
        if(head==NULL) return false;
        
        while(b->next!=NULL&&b->next->next!=NULL)
        {
            
           
            a=a->next;
            b=b->next->next;
            if(a==b)
            {
                return true;
            }
        }
       
        return false;
        
    }
};