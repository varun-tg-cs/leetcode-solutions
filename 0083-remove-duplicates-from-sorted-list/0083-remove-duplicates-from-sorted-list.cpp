/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == nullptr) {
            return head;
        }

        unordered_map<int, int> mpp;
        ListNode* temp = head;

        while (temp != NULL) {
            mpp[temp->val]++;
            temp = temp->next;
        }

        temp = head;
        ListNode* prev = nullptr;

        while (temp != NULL) {
            if (mpp[temp->val] > 1) {
                mpp[temp->val]--;

                if (prev != nullptr) {
                    prev->next = temp->next;
                }
                else {
                    head = temp->next;
                }

                ListNode* duplicate = temp;
                temp = temp->next;
                delete duplicate;
            }
            else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
