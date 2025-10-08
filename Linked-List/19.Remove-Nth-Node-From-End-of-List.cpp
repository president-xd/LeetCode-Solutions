class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0, head);
        ListNode* first = dummy;
        ListNode* second = dummy;

        // Move first pointer n+1 steps ahead to maintain the gap of n between first and second
        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        // Move both pointers until the first reaches the end
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        // Remove the nth node from the end
        ListNode* to_delete = second->next;
        second->next = second->next->next;
        delete to_delete;

        // Return the new head (dummy->next is the updated head)
        ListNode* new_head = dummy->next;
        delete dummy;
        return new_head;
    }
};