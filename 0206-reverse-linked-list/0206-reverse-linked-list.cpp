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
        ListNode* temp1=NULL;
        ListNode* temp2=head;

        while(head!=NULL){
            temp2=temp2->next;
            head->next=temp1; //head ka pointer(1->2) kaat ke peechhe lagana hai
            temp1=head; //peechhe wale ko aage badhana hai
            head=temp2; //head ko aage badhana hai
        }
        return temp1;
    }
};