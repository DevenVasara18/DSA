/*
class Solution {
public:
    ListNode* removeDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {

            if (curr->data == curr->next->data) {
                ListNode* duplicate = curr->next;

                curr->next = duplicate->next;

                if (duplicate->next != nullptr)
                    duplicate->next->prev = curr;

                delete duplicate;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};
*/