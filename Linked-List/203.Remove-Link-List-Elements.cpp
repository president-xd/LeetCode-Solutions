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
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node that points to head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;

        // Traverse and remove nodes
        while (current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // free the removed node
            } else {
                current = current->next;
            }
        }

        // New head after removal
        ListNode* newHead = dummy->next;
        delete dummy;  // free dummy node
        return newHead;
    }
};