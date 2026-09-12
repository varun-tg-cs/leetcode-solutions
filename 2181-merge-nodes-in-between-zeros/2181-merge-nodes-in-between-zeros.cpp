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
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode* temp = head;
        ListNode* newNode;
        ListNode* HEAD = NULL;
        ListNode* TAIL = NULL;
        while (temp != NULL) {
            int sum = 0;
            while (temp->val != 0) {
                sum += temp->val;
                temp = temp->next;
            }
            newNode = new ListNode(sum);
            if (HEAD == NULL) {
                HEAD = newNode;
                TAIL = newNode;
            }
            else {
                TAIL->next = newNode;
                TAIL = newNode;
            }
            temp = temp->next;
        }
        return HEAD;
    }
};