/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || !k) return head;
        
        auto temp = head;
        
       
        int size = 1;
        while (temp->next) {
            temp = temp->next;
            ++size;
        }
        
      
        temp->next = head;
        
        
        k %= size;
        
        
        while(--size >= k) {
            temp = temp->next;
        }
        
       
        head = temp->next;
        
       
        temp->next = nullptr;
        
        return head;
    }
};