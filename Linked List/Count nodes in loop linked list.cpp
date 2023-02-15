int countNodesinLoop(struct Node *head)
{
    Node *slow=head,*fast=head,*x=head;
    int cnt=0;
        
        while(slow!=NULL && fast!=NULL && fast->next!=NULL) {
            
            slow = slow->next;              
            fast = fast->next->next;       
            
          
            if(slow==fast) 
            {
                x=slow;
               
                while(slow->next!=x) 
                {
                   
                    slow = slow->next;
                    fast=fast->next;
                    cnt++;
                }
                return cnt+1;
                
            }
 
        }
        
        return 0;
}