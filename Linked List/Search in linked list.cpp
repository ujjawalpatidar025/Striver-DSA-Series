/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* tail=head;
        int f=0;
        while(tail->next!=NULL)
        {
            if(tail->data==key)
            {
                f=1;
                return true;
            }
            tail=tail->next;
        }
        return false;
        
    }
};