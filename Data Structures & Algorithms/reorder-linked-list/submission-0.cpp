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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        ListNode* temp = head->next;
        head->next = nullptr;
        while(temp!=nullptr){
            ListNode* tempnext = temp->next;
            temp->next = head;
            head = temp;
            temp = tempnext;

        }

        return head;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;


        }

        ListNode* rev = reverseList(slow->next);

        slow->next = nullptr;

        ListNode* temp1 = head;
        ListNode* temp2 = rev;

        while(temp1 != nullptr && temp2!=nullptr)
        {
            ListNode* nxtemp1 = temp1->next;
            ListNode* nxtemp2 = temp2->next;

            temp1->next = temp2;
            temp2->next = nxtemp1;

            temp1 = nxtemp1;
            temp2 = nxtemp2;

        }

    }
};
