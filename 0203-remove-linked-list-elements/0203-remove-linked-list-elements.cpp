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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr=head;
        ListNode* preptr = NULL;
        while(ptr!=nullptr){
            if (ptr->val == val) {
                ListNode* temp = ptr;
                if (preptr == nullptr) {
                    head = ptr->next;
                } 
                else {
                    preptr->next = ptr->next;
                }

                ptr = ptr->next;
                delete temp;
            } 
            else {
                preptr = ptr;
                ptr = ptr->next;
            }
        }
        return head;
    }
};