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
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while (curr != nullptr) {
        next = curr->next; // Store the next node
        curr->next = prev; // Reverse the link

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    return prev; // Return the new head of the reversed list
}

ListNode* find(ListNode* temp, int k){
    k=k-1;
    while(temp!=NULL && k>0){
        k--;
        temp=temp->next;
    }
    return temp;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        while(temp!=NULL){
            ListNode* kthNode=find(temp, k);
            if(kthNode==NULL){
                if(prevNode){
                    prevNode->next=temp;
                }
                break;
            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;
            reverseList(temp);
            if(temp==head){
                head=kthNode;
            }
            else{
                prevNode->next=kthNode;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};