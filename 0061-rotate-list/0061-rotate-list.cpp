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
    ListNode* reverse(ListNode *head, int k){
        ListNode*prev = NULL;
        ListNode *current = head;
        ListNode *after = NULL;
        int cnt =0;
        while(current!=NULL&& cnt<k){
            after = current->next;
            current->next= prev;
            prev = current;
            current = after;
            cnt++;
            
        }
        head->next=current;
        return prev;

    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        int cnt=0;
        ListNode*temp = head;
        while(temp!=NULL){
            temp= temp->next;
            cnt++;
        }
        k = k%cnt;
        if(k==0){
            return head;
        }
        ListNode*temp1 = head;
        
        temp1 = reverse(temp1,cnt);
        ListNode* firsttail = temp1;
        temp1 = reverse(temp1,k);
        
    int f = cnt -k; 
    
   ListNode* remaining = firsttail->next;
   ListNode* newhead = reverse(remaining,f);
   firsttail->next= newhead;
   return temp1;
       

        
    }
};