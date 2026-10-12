/*
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr->next!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }

    ListNode *addOne(ListNode *head) {
        head = reverseList(head);

        ListNode* curr = head;
        int carry = 1;

        while(curr!= nullptr && carry){
            int sum = curr->val + carry;

            curr->val = sum%10;
            carry = sum/10;

            if(curr==nullptr && carry){
                curr->next = new ListNode(carry);
                carry=0;
            }
            curr = curr->next;
        }
        head = reverseList(head);
        return head;
    }
};
*/