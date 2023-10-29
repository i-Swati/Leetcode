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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int len=0;

        while(temp!=nullptr){
            temp=temp->next;
            len++;
        }
        ListNode* t1=head;
        if(len%2==0){ //even
            for(int i=1; i<(len/2)+1; i++){
                t1=t1->next;
            }
            return t1;            
        }
        else{//odd
            for(int i=1; i<(len+1)/2; i++){
                t1=t1->next;
            }
            return t1;
        }
    }
};