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
    void reorderList(ListNode* head) {
        if (head==NULL || head->next==NULL)
            return;

        // Step 1: Convert linked list to array
        vector<ListNode*> arr;
        ListNode* temp = head;
        while (temp!= NULL) {
            arr.push_back(temp);
            temp = temp->next;
        }

        // Step 2: Reorder array as per the problem statement
        int i = 0, j = arr.size() - 1;
        vector<ListNode*> reorderedArr;
        while (i <= j) {
            if (i == j) {
                reorderedArr.push_back(arr[i]);
            } else {
                reorderedArr.push_back(arr[i]);
                reorderedArr.push_back(arr[j]);
            }
            i++;
            j--;
        }

        // Step 3: Construct new linked list from reordered array
        for (int k = 0; k < reorderedArr.size() - 1; k++) {
            reorderedArr[k]->next = reorderedArr[k + 1];
        }
        reorderedArr.back()->next = nullptr;
    }
};