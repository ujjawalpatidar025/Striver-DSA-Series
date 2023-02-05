class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
      //Your code here
      Node* curr=head;


    if(x==1){

        head=curr->next;

     }

     for(int i=1;i<x;i++){

         curr=curr->next;

     }



     if(curr->next==NULL){

         curr->prev->next=NULL;

         return head;

     }



if(x!=1)

    curr->prev->next=curr->next;

    curr->next->prev=curr->prev;

     return head;
      
    }
};