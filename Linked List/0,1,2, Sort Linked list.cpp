class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
       int n = 0;
        int zero = 0, one = 0, two = 0;
        Node * t = head;
        while(t != NULL){
            n++;
            if(t->data == 0)zero++;
            if(t->data == 1)one++;
            if(t->data == 2)two++;
            t = t->next;
        }
        t = head;
        for(int i = 1; i <= zero; i++){
            head->data = 0;
            head = head->next;
        }
        for(int i = zero+1; i <= zero+one; i++){
            head->data = 1;
            head = head->next;
        }
        for(int i = zero+one+1; i <= n; i++){
            head->data = 2;
            head = head->next;
        }
        return t;
    }
};