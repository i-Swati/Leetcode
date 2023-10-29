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
//TC=2 O(n)
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
        map<ListNode*, bool> mp;
        //insert into map
        ListNode* t1=l1;
            while(t1!=NULL){
                mp[t1]=true;
                t1=t1->next;
            }

        ListNode* t2=l2;
            while(t2!=NULL){
                if(mp.find(t2)!=mp.end()){
                    return t2;
                }
                t2=t2->next;
            }
        return NULL;
    }
};