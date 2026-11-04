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
ListNode *reverse(ListNode*head){
    ListNode *prev = NULL;
    ListNode *current = head;
    ListNode *next = NULL;
    while(current!=NULL){
    next = current ->next;
    current->next = prev;
    prev = current;
    current = next;
    }
    return prev;
}
    

    bool isPalindrome(ListNode* head) {
        if(head== NULL || head->next==NULL){
            return true;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast !=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *second = reverse(slow);
        ListNode *compare = head;
        while(second!=NULL){
            if(compare->val != second->val){
                return false;
            }
            compare = compare->next;
            second = second->next;
        }
        return true;
    }
};