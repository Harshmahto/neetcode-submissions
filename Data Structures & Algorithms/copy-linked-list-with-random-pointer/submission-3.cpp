/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    if (head == NULL) return NULL; 

    // step 1: create duplicate in the same ll
    Node* temp = head;
    while (temp != NULL) {
        Node* a = new Node(temp->val);
        a->next = temp->next;
        temp->next = a;
        temp = a->next; 
    }

    // step 2: assign the random
    temp = head;
    while (temp != NULL) {
        // Ternary operator instead of if-else
        temp->next->random = (temp->random != NULL) ? temp->random->next : NULL;
        temp = temp->next->next; 
    }

    // step 3: separate both lists
    temp = head;
    Node* newHead = head->next;
    Node* temp2 = newHead;
    
    while (temp != NULL) {
        temp->next = temp->next->next;
        // Ternary operator directly assigns the correct pointer
        temp2->next = (temp2->next != NULL) ? temp2->next->next : NULL;
        
        temp = temp->next;       
        temp2 = temp2->next;     
    }

    return newHead;
}

};


