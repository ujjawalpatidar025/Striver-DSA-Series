struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int count=0;
        Node* tail=head;
        count++;
        while(tail->next!=NULL)
        {
            count++;
            tail=tail->next;
        }
        return count;
    
        //Code here
    
    }
};