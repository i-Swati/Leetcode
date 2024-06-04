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

    //function to merge two sorted lists
    //this will be called upon recursively

    ListNode* mergeTwoSortedLists(ListNode* l1, ListNode* l2){
        ListNode* temp= new ListNode();
        ListNode* dummy= temp;

        //base cases
        if(l1==NULL){
            return l2;
        }

        if(l2==NULL){
            return l1;
        }

        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                dummy->next= l1;
                l1= l1->next;
            }

            else{
                dummy->next= l2;
                l2= l2->next;
            }
        dummy= dummy->next;
        }

    //remaining nodes

    if(l1!=NULL){
        dummy->next = l1;
    }

    if(l2!= NULL){
        dummy->next = l2;
    }

    return temp->next;
}

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //base case
        if(lists.empty()){
            return NULL;
        }

        ListNode* head= lists[0];

        //Recursive call
        for(int i=1; i<lists.size(); i++){
            head= mergeTwoSortedLists(head, lists[i]);
        }

        return head;

    }
};