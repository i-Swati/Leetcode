/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
        ListNode* temp1=l1;
        int len1=0;

        while(temp1!=NULL){
            temp1=temp1->next;
            len1++;
        }

        ListNode* temp2=l2;
        int len2=0;

        while(temp2!=NULL){
            temp2=temp2->next;
            len2++;
        }

        int diff=abs(len2-len1);

        temp1=l1;
        temp2=l2;

        if(len1>len2){
            for(int i=0; i<diff; i++){
                temp1=temp1->next;
            }

        }
        else{
            for(int i=0; i<diff; i++){
                temp2=temp2->next;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
        
    }
};