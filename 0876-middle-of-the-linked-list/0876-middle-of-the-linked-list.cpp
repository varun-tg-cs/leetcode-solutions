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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head;
        int c=0;
        if(head->next==nullptr) return head;
        while(ptr!=NULL){
            ptr=ptr->next;
            c+=1;
        }
        if(c%2==0) c=c/2+1;
        else c=(c+1)/2;
        ptr = head;
        while(c!=1){
            ptr=ptr->next;
            c-=1;
        }
        return ptr;
    }
};