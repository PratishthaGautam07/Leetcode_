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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp = head;
        int cnt = 0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;

        }
        ListNode *del = head;
      int snt = cnt-n;
      if(cnt == n){
        ListNode *del = head;
        head = head->next;
        delete del;
        return head;

      }
      for(int i = 1; i <snt; i++){
        del = del->next;

      }
      ListNode *tobedel = del->next;
        del->next= del->next->next;
        delete(tobedel);
        return head;

        
    }
};