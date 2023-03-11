class Solution {
  public:
   void deleteNode(struct Node** head_ref, struct Node* curr){
        if (*head_ref == NULL || curr == NULL)
            return;
     
        if (*head_ref == curr)
            *head_ref = curr->next;
     
        if (curr->next != NULL)
            curr->next->prev = curr->prev;
    
        if (curr->prev != NULL)
            curr->prev->next = curr->next;
     
        free(curr);
    }
  
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        struct Node* current = *head_ref;
        struct Node* next;
        while(current!=NULL){
            if(current->data == x){
                next  = current->next;
                deleteNode(head_ref, current);
                current = next;
            }else{
                current = current->next;
            }
        }
    }
};