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
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while (current != NULL){
            next = current->next;  // Save the next node
            current->next = prev;  // Reverse the link

            prev = current;        // Move prev to current
            current = next;        // Move current to next
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return true; // Edge case: empty or single node list
        }

        // Step 1: Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list
        ListNode* second_half = reverseList(slow);

        // Step 3: Compare the two halves
        ListNode* temp = second_half;
        ListNode* current = head;
        while (temp != NULL) {
            if (temp->val != current->val) {
                return false; // Not a palindrome
            }
            temp = temp->next;
            current = current->next;
        }

        return true; // List is a palindrome
    }
};
