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
    ListNode* reverse(ListNode* head){
      ListNode* temp=head;
      ListNode* prev=NULL;

      while(temp!=NULL){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
      }
      return prev;
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
    ListNode* temp = head;
    ListNode* prevNode = NULL;

    while (temp != NULL) {
        ListNode* kthNode = find(temp, k);

        // if kthNode doesn't exist
        if (kthNode == NULL) {
            if (prevNode) {
                prevNode->next = temp;
            }
            break;
        }
        // kthNode exists
        else {
            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            reverse(temp); // Reverse the first kth group

            if (temp == head) {
                head = kthNode;
            } else {
                prevNode->next = kthNode;
            }

            temp->next = nextNode;
            prevNode = temp;
            temp = nextNode;
        }
    }
    return head;
  }
};