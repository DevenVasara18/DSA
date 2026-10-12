/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

// class Solution
// {
// public:
//     ListNode *deleteHead(ListNode *&head)
//     {
//         if (head == nullptr)
//             return nullptr;

//         ListNode *temp = head;
//         head = head->next;

//         temp->next = nullptr;

//         if (head != nullptr)
//             head->prev = nullptr;

//         delete temp;

//         return head;
//     }
// };
