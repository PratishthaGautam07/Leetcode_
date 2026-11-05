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

ListNode *reverse( ListNode*head){
    ListNode *prev = NULL;
    ListNode *current = head;
    ListNode *after = NULL;
    while(current!=NULL){
        after = current->next;
        current->next = prev;
        prev = current ;
       current = after;
     


    }
    
      return prev;
}
string addStrings(string a, string b) {
        string ans = "";

        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if(i >= 0)
                sum += a[i--] - '0';

            if(j >= 0)
                sum += b[j--] - '0';

            ans += to_string(sum % 10);
            carry = sum / 10;
        }

        std::reverse(ans.begin(), ans.end());

        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* result = NULL;
           ListNode* tail = NULL;
         l1 = reverse(l1);
        ListNode *temp = l1;
       
        
        string num01 = "";
        while(temp!=NULL){
            int data = temp->val;
            
            num01 += to_string(data);
            temp = temp->next;
        }
        
        l2 = reverse(l2);
         ListNode *temp2 = l2;
        
        string num02 = "";
        while(temp2!=NULL){
            int data = temp2->val;
            
             num02 += to_string(data);
            temp2 = temp2->next;
        }
        
         string str = addStrings(num01, num02);
        
        for(int i =0 ; i<str.size(); i++){
            int digit = str[i] -'0';
            ListNode* newNode = new ListNode(digit);
             if(result == NULL) {
             result = newNode;
             tail = newNode;
             }
             else {
             tail->next = newNode;
              tail = newNode;
         }
        }
         result = reverse(result);
        return result;

        

    }
};