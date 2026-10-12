/*
class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
        vector<vector<int>> ans;

        if (head == nullptr) {
            return ans;
        }

        ListNode* left = head;
        ListNode* right = head;

        while (right->next != nullptr) {
            right = right->next;
        }

        while (left != right && left->prev != right) {
            int sum = left->val + right->val;

            if (sum == target) {
                ans.push_back({left->val, right->val});
                left = left->next;
                right = right->prev;
            }
            else if (sum < target) {
                left = left->next;
            }
            else {
                right = right->prev;
            }
        }

        return ans;
    }
};
*/