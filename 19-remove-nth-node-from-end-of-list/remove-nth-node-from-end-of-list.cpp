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
 //BRUTE FORCE
 //TC=O(2 cnt)
 //SC=O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp=head;

        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n){                 //agar length n ke barabar ho, yaani head delete krna hoga
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }
        int res=cnt-n;
        temp=head;

        while(temp!=NULL){
            res--;

            if(res==0){
                break;
            }
            temp=temp->next;
        }
        ListNode* delNode=temp->next;
        temp->next=temp->next->next;
        delete delNode;
        return head;
    }        
};