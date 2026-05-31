#include <string>
#include <algorithm> // Required for std::reverse


class Solution {  
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int v1 = (l1!=nullptr)?l1->val:0;
            int v2 = (l2!=nullptr)?l2->val:0;

            int v = v1+v2+carry;
            carry = v/10;
            int digit = v%10;
            
            temp->next = new ListNode(digit);
            temp = temp->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy->next;
    }

};