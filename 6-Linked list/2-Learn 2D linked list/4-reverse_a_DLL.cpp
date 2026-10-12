
/*
class ListNode {
    public:
    int data;
    ListNode* prev;
    ListNode* next;
    
    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
    };
    */
/*

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* prev = nullptr;
        ListNode* current = head;

        while (current != nullptr) {
            prev = current->prev;

            current->prev = current->next;
            current->next = prev;

            current = current->next;
        }

        return prev->prev;
    }
};
*/