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
    ListNode* partition(ListNode* head, int x) {

        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);

        ListNode* p1 = small;
        ListNode* p2 = large;

        while (head != nullptr) {

            if (head->val < x) {
                p1->next = head;
                p1 = p1->next;
            }
            else {
                p2->next = head;
                p2 = p2->next;
            }

            head = head->next;
        }

        p2->next = nullptr;
        p1->next = large->next;

        return small->next;
    }
};