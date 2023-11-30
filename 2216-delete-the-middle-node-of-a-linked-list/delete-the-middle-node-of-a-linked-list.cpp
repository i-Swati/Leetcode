class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0; // Count/number of elements

        // Count the number of nodes in the linked list
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout<<count<<endl;
        

        temp = head; // Reset temp to head
        int n; // Position of the middle node

        if (count % 2 == 0) {
            // For even count of elements, consider the second middle node
            n = count / 2 +1; // For the second middle node in even cases
        } else {
            // For odd count of elements
            n = (count + 1) / 2; // For the exact middle node in odd cases
        }
    cout<<n;
        ListNode* prev = NULL;

        // Traverse to the node before the middle node
        while (n > 1) {
            prev = temp;
            temp = temp->next;
            n--;
        }

        // Deleting the middle node based on the adjusted position
        if (prev != NULL) {
            prev->next = temp->next; // Skip the middle node
            delete temp; // Delete the middle node
        } else {
            head = head->next; // Update head to the node after the middle node
            delete temp; // Delete the original head (middle node)
        }

        return head;
    }
};
