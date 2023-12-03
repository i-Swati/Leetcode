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
    ListNode *detectCycle(ListNode *head) {
        //we create a map to store node and count
        map<ListNode*, int>mpp;
        ListNode* temp=head; //create a temp node and initialize it to head

        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){ //if an element is found twice, return that
                return temp;
            }
            mpp[temp]=1; //if it is not found, put that in hash map
            temp=temp->next; //move temp
        }
        return NULL; //else, return null
    }
};