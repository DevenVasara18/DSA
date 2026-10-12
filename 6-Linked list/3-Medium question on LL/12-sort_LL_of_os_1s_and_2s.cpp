/*
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode zeroHead(-1);
        ListNode oneHead(-1);
        ListNode twoHead(-1);

        ListNode* zero = &zeroHead;
        ListNode* one = &oneHead;
        ListNode* two = &twoHead;

        ListNode* temp = head;

        while (temp != nullptr) {
            if (temp->data == 0) {
                zero->next = temp;
                zero = zero->next;
            }
            else if (temp->data == 1) {
                one->next = temp;
                one = one->next;
            }
            else {
                two->next = temp;
                two = two->next;
            }

            temp = temp->next;
        }

        two->next = nullptr;

        zero->next = oneHead.next != nullptr
                   ? oneHead.next
                   : twoHead.next;

        one->next = twoHead.next;

        return zeroHead.next;
    }
};
*/