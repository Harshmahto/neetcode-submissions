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
        if(head == nullptr) return head;

        if(head->next == nullptr && n>0){
            return nullptr;
        }
        ListNode* temp = new ListNode(-1,head);
        ListNode* left = temp;
        ListNode* right = temp;
        
        while(n!=0){
            right = right->next; 
            n--;

        }
        while (right->next!=NULL){
            left = left->next;
            right = right->next;
        }

        left->next=left->next->next;

        return temp->next;
    }
        
};
