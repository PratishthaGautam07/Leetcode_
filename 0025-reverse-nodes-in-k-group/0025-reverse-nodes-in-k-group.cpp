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
ListNode* reverse(ListNode*head,int k ){
    ListNode * prev = NULL;
    ListNode * current = head;
    ListNode *next = NULL;
  for(int i = 0 ; i<k ;i++){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;


}


    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        int cnt = 0;
        while( temp!= NULL){
            temp = temp->next;
            cnt++;
        }
        int div = cnt/k;
        int n = k*div;
        ListNode *temp2 = head;
        for(int i = 0 ; i < n;i++){
            temp2 = temp2->next;
        }
         ListNode *temp3 = head;
         ListNode *nextgrp= head;
         ListNode* prevGroup = NULL;

         while(temp3 != temp2){
            nextgrp = temp3;
            for(int i = 0; i<k;i++){
                nextgrp = nextgrp->next;
           
              

            }
             ListNode *newhead = reverse(temp3,k);
            temp3->next = nextgrp;
            
            if(prevGroup == NULL){
    head = newhead;
}
else{
    prevGroup->next = newhead;
}
prevGroup = temp3;
            temp3 = nextgrp;
         }

        return head;
        
    }
};