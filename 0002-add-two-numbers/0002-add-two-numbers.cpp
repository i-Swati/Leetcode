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
    /*ListNode* reverse(ListNode* head){
        ListNode* temp1=NULL;
        ListNode* temp2=head;

        while(head!=NULL){
            temp2=head->next;
            head->next=temp1;
            temp1=head;
            head=temp2;
        }
        return temp1;    
    }*/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;

        int carry=0;

        while(l1!=NULL || l2!=NULL || carry!=0){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            int digit=0;
            digit=sum%10;

            ListNode* l=new ListNode(digit);
            temp->next=l;
            temp=l;       
        }
        return dummy->next;
    }
};