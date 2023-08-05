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
    ListNode* removeElements(ListNode* head, int val) {

        // Handle the case where the list is empty
        if (head == nullptr) {
            return nullptr;
        }

        // Handle cases where the value to be removed is at the beginning of the list
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        if(head == nullptr){
            return head;
        } 
        
        ListNode* prev = head;
        ListNode* curr = head->next;

        // Traverse the list and remove nodes with the given value
        while (curr != nullptr) {
            if (curr->val == val) {
                ListNode* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};