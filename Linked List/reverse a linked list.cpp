Node* reverseDLL(Node * head)
{
    //Your code here
    
    Node *tail= head, *ptr= head;
    int cnt=0;
    while (tail->next!=NULL) {
        cnt++;
        tail= tail->next;
    }
    
        for(int i=0;i<=cnt/2;i++) {
            int temp= ptr->data;
            ptr->data= tail->data;
            tail->data= temp;
            
            ptr= ptr->next;
            tail= tail->prev;
        }
    return head;
}
