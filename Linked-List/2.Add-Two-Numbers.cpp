class Solution {
public:
    void insertAtHead(ListNode*& list, int value) {
        ListNode* temp = new ListNode(value);
        temp->next = list;
        list = temp;
    }
}