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

    int gettingLength(ListNode *head){
        int len = 0;
        ListNode *temp = head;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

    ListNode * reverseKNodes(ListNode* &head, int k){
        if(head == NULL){
            cout<< "LL is empty" << endl;
            return head;
        }

        int len = gettingLength(head);
        if(k > len){
            // cout<< "Enter valid value of k "<< endl;
            return head;
        }

        //it means number of nodes in LL is >= k
        //Step A : reverse first k nodes of LL
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = curr->next;
        int count = 0;

        while(count < k){ 
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        //Step B: recursive call
        if(forward != NULL){
            // we still have nodes left to reverse
            ListNode *recursionAns = reverseKNodes(forward, k);
            head -> next =  recursionAns;
        }

        //Step C: return head of the modified LL
        return prev;
}


    ListNode* swapPairs(ListNode* head) {
       ListNode *ans = reverseKNodes(head, 2);
       return ans;
    }
};