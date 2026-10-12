/*
class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == nullptr)
            return nullptr;

        // 1. Insert copy nodes in between
        Node* curr = head;

        while (curr != nullptr) {
            Node* copy = new Node(curr->val);

            copy->next = curr->next;
            curr->next = copy;

            curr = copy->next;
        }

        // 2. Connect random pointers
        curr = head;

        while (curr != nullptr) {
            if (curr->random != nullptr) {
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;
        }

        // 3. Separate original and copied list
        curr = head;
        Node* copyHead = head->next;

        while (curr != nullptr) {
            Node* copy = curr->next;

            curr->next = copy->next;

            if (copy->next != nullptr) {
                copy->next = copy->next->next;
            }

            curr = curr->next;
        }

        return copyHead;
    }
};
*/