/*
class Solution {
public:
    ListNode* deleteAllOccurrences(ListNode* head, int target) {
        ListNode* curr = head;

        while (curr != nullptr) {

            if (curr->val == target) {
                ListNode* next = curr->next;

                if (curr == head) {
                    head = next;

                    if (head != nullptr) {
                        head->prev = nullptr;
                    }
                }
                else {
                    curr->prev->next = next;

                    if (next != nullptr) {
                        next->prev = curr->prev;
                    }
                }

                delete curr;
                curr = next;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};
*/