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
 ListNode* reverse(ListNode*head){
        ListNode *prev = NULL;
        ListNode *current = head;
        ListNode *next = NULL;
        while(current !=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;

    }
    void reorderList(ListNode* head) {
        if(head == NULL){
            return;
        }
        if(head->next == NULL){
            return;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
         
        

        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
        }
        
      

         ListNode *reversehead = reverse(slow->next);
         slow->next = NULL;
        ListNode *temp = head;
        ListNode *temp2 = reversehead;
        
        while(temp !=NULL &&temp2!=NULL){
        ListNode *firstnext = temp->next;
        ListNode *secondnext = temp2->next;
        temp->next = temp2;
        temp2->next = firstnext;
        temp = firstnext;
        temp2 = secondnext;
        }
        

       
        

        
    }
};