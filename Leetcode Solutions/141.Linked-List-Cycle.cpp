/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* current = head;
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL){
            current = current->next;
            temp = temp->next->next;

            if (current == temp){
                return true;
            }
        }

        return false;
    }
};