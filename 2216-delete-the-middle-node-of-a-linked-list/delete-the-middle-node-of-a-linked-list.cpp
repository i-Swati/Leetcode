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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=0;
        ListNode* temp=head;

        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }

        temp=head;
        int n=0;

        if(cnt%2==0){
            n=cnt/2 + 1;
        }
        else{
            n= (cnt+1)/2;
        }

        ListNode* prev=NULL;
        
        // Traverse to the node before the middle node
        while (n > 1) {
            prev = temp;
            temp = temp->next;
            n--;
        }
        if(prev!=NULL){
            prev->next=temp->next;
            delete temp;
        }
        else{
            head=head->next;
            delete temp;
        }
        return head;
    }
};