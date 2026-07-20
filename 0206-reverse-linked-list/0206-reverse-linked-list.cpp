class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {

            next = curr->next;   // Save next node
            curr->next = prev;   // Reverse link

            prev = curr;         // Move prev forward
            curr = next;         // Move curr forward
        }

        return prev;
    }
};