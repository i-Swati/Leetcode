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
    int getDecimalValue(ListNode* head) {
        vector<int> ans;
        int result= 0;
        int index= 0;

        while(head!= NULL){
            ans.push_back(head->val);
            head= head->next;
        }

        for(int i= ans.size()-1; i>=0; i--){
            result= result + (ans[i] * pow(2, index));//1, 1, 5
            index++;
            //1 1 0 1= 13= 1, 1, 5, 13
        }
        return result;
    }
};