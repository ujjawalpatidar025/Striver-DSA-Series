class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node * t = head;
        Node * r = head;
        while(t != NULL){
            if(t->data != 9){
                r = t;
            }
            t = t->next;
        }
        r->data = r->data + 1;
        r = r->next;
        while(r != NULL){
            r->data = 0;
            r = r->next;
        }
        return head;
    }
};