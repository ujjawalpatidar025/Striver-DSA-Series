void addNode(Node *head, int pos, int data)
{
   // Your code here
   int cnt=0;
   Node* temp=head;
   while(cnt!=pos)
   {
       temp=temp->next;
       cnt++;
   }
   
   Node* cur=new Node(data);
   cur->next=temp->next;
   cur->prev=temp;
   temp->next=cur;
    
}