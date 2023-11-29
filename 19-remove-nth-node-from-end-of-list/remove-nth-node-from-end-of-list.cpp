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
        //sabse pehle length calculate krenge...cnt
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }

        //if cnt (i.e. length)==n ho jayega, matlab headnode delete krenge
        if(cnt==n){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
        }

        //ab other cases ke liye, jisme cnt!=n; yaani n ki kuch value hogi
        int res=cnt-n;
        temp=head;

        while(temp!=NULL){
            res--;
            if(res==0){
                break;
            }
        temp=temp->next;
        }

        ListNode* delNode=temp->next;
        temp->next=temp->next->next;
        delete delNode;
        return head;

    }
};