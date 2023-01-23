/*class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
         Node*head=NULL;

        Node*tail=NULL;

         

        head=new Node(arr[0]);

        tail=head;

            

        for(int i=1;i<arr.size();i++)

        {
            Node*node=new Node(arr[i]);

            tail->next=node;

            tail=tail->next;

         }

        return head;
    }
};