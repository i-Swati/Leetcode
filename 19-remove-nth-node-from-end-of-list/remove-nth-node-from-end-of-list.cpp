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
        int l= 0; //length= 0
        //int k= l-(n-1);
        //first we calculate the length of ll

        ListNode* temp= head;
        while(temp!= NULL){
            temp=temp->next;
            l++;
        }

        //to delete kth node from beginning
        int k= l-(n-1);

        //if k is head
        if(k==1){
            head= head->next;
            return head;
        }

        ListNode* temp2= head;
        int start= 1;
        while(start<k-1){
            temp2= temp2->next;
            start++;
        }
        temp2->next= temp2->next->next;
        return head;
    }
};