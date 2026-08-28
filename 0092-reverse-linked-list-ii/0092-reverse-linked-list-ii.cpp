class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        // left wale node tak pahuchna
        ListNode* before = nullptr;

        for(int i = 1; i < left; i++) {
            before = curr;
            curr = curr->next;
        }

        // left se right tak reverse
        ListNode* last = curr;

        for(int i = left; i <= right; i++) {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // connections dobara banana
        if(before != nullptr) {
            before->next = prev;
        } else {
            head = prev;
        }

        last->next = curr;

        return head;
    }
};