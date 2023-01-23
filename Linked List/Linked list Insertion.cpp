/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       struct Node *new1;

    if(head==NULL)

    {

        head=(struct Node *)malloc(sizeof(struct Node));
        head->data=x;
        head->next=NULL;

    }

    else

    {
        new1=(struct Node *)malloc(sizeof(struct Node));
        new1->data=x;
        new1->next=NULL;
        new1->next=head;
        head=new1;

    }

    return head;
        
       // Your code here
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       struct Node *new1,*temp;

        if(head==NULL)

        {

            head=(struct Node *)malloc(sizeof(struct Node));
            head->data=x;
            head->next=NULL;

        }

        else

        {

            new1=(struct Node *)malloc(sizeof(struct Node));
            new1->data=x;
            new1->next=NULL;
            temp=head;
            while(temp->next!=NULL)
            {

                temp=temp->next;
                
            }
            temp->next=new1;

        }

    return head;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 
