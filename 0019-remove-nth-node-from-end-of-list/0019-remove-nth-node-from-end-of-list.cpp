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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = head;
        int size=0;
        while(ptr!=NULL){
            ptr=ptr->next;
            size+=1;
        }
        //target th element
        int target = size-n+1;
        ptr=head;
        ListNode *preptr = NULL;
        int c=1;
        if(size==n){
            return head->next;
        }
        while(ptr!=NULL){
            if(c==target){
                preptr->next=ptr->next;
                delete ptr;
                return head;
            }
            preptr=ptr;
            ptr=ptr->next;
            c++;
        }
        return head;
    }
};