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
        if (head == nullptr || head->next == nullptr) {
            return false;
        }

        ListNode *first = head;
        ListNode *second = head->next;

        while (first != second) {
            if (!second || !second->next) { return false; }

            first = first->next;
            second = second->next->next;
        }

        return true;
    }
};