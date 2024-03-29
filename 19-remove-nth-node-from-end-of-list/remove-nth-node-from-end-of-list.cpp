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
        ListNode* temp=head;

        //legth of LL
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }

        int k=len-(n-1);

        //to delete kth node from beginning
        if(k==1){
            //k is head;
            head=head->next;
            return head;
        }
        ListNode* temp2=head;
        int start=1;
        while(start<k-1){
            temp2=temp2->next;
            start++;
        }
        temp2->next=temp2->next->next;
        return head;
    }
};