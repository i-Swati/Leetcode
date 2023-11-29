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
 //TC=O(N/2)+O(N/2)+O(N)=O(2N)
 //SC=O(N)
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int>arr;
        //base case
        if(head==NULL || head->next==NULL){ //agar linkedlist khaali ho
        //ya usme ek hi element ho
            return head;
        }
        //keeping odd position elements to the first side
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        //if anything remains at the end
        if(temp){
            arr.push_back(temp->val);
        }

        //keeping even positioned elements towards the end
        temp=head->next;
        while(temp!=NULL && temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        //if anythinng remains at the end
        if(temp){
            arr.push_back(temp->val);
        }    
        //now, interchanging values
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};