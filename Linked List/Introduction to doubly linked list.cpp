class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
          Node* head = new Node(arr[0]);
         Node *curr=head;

        

        for(int i=1; i<arr.size(); i++){

            Node* temp1 = new Node(arr[i]);

            curr->next = temp1;

            temp1->prev = curr;

            curr = temp1;

        }

        return head;

        // code here
    }
};