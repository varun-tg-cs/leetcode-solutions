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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==nullptr){
            return head;
        }
        ListNode* preptr = head;
        ListNode* ptr = head->next;
        ListNode* NN = new ListNode(0, preptr);
        ListNode* prev=NN;
        while (ptr != NULL) {
            if (preptr == head) {
                preptr->next = ptr->next;
                ptr->next = preptr;
                NN->next = ptr;
                head = ptr;
            }
            if(preptr->next == nullptr || preptr->next->next == nullptr){
                return head;
            }
            prev=preptr;
            ptr=preptr->next->next;
            preptr=preptr->next;
            if(ptr->next==nullptr){
                prev->next=ptr;
                preptr->next=nullptr;
                ptr->next=preptr;
                return head;
            }
            else{
                preptr->next=ptr->next;
                ptr->next=preptr;
                prev->next=ptr;
            }
        }
        return head;
    }
};