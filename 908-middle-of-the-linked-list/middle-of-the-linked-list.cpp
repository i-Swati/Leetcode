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
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        cout<<cnt;
        int n=0;
        if(cnt%2==0){
            n=cnt/2;
        }
        else{
            n=cnt/2;
        }
        cout<<n;
        // Reset temp to the head of the list
        temp = head;
        while (n > 0) {
            temp = temp->next;
            n--;
        }
        
        return temp;
    }
};