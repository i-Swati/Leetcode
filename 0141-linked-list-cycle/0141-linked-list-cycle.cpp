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
//TC=O(n), SC=O(n)
    bool hasCycle(ListNode *head) {
        map<ListNode*, bool>mp;
        ListNode* temp=head;

        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return true;
            }
            mp[temp]=true;
            temp=temp->next;
        }
        return false;
    }
};