/*
class Solution {
public:

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);
        ListNode* res = &dummy;

        while (list1 != nullptr && list2 != nullptr) {

            if (list1->val <= list2->val) {
                res->child = list1;
                list1 = list1->child;
            }
            else {
                res->child = list2;
                list2 = list2->child;
            }

            res = res->child;
        }

        if (list1 != nullptr)
            res->child = list1;
        else
            res->child = list2;

        return dummy.child;
    }

    ListNode* flattenLinkedList(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        // Flatten the remaining lists
        ListNode* mergedHead = flattenLinkedList(head->next);

        // Merge current list with flattened list
        head = merge(head, mergedHead);

        return head;
    }
};
*/