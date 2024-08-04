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
        ListNode* dummy= NULL;

        while(head!= NULL){
            ListNode* next= head->next;
            head->next= dummy;

            dummy= head;
            head= next;
        }
        return dummy;
    }
};
/*I start by creating a pointer dummy which is initialized to NULL. This will eventually point to the head of the reversed list. Initially, it is NULL because the reversed list is empty at the beginning.

I use a while loop to iterate through the entire list. The loop continues until head becomes NULL.

Inside the loop, I perform several key operations:

ListNode* next = head->next;
First, I store the reference to the next node in a temporary variable next. This is important because I am going to change the head->next pointer, and I don't want to lose track of the rest of the list.
head->next = dummy;
Next, I reverse the link for the current node. Instead of pointing to the next node in the original list, the current node now points to the previous node (pointed to by dummy).
dummy = head;
Then, I move the dummy pointer to the current node. This means that dummy always points to the new head of the reversed list so far.
head = next;
Finally, I advance the head pointer to the next node in the original list (which I stored in next).



After the loop completes, dummy points to the new head of the reversed list. I return dummy as the result.

It runs in O(n) time complexity because it processes each node exactly once, and it uses O(1) space complexity because it only uses a few extra pointers
*/