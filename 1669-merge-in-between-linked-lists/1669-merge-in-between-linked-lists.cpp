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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int c=0;
        ListNode* temp=list1;
        ListNode* tailOfList2 = list2;
        ListNode* prev=NULL;
        int diff=b-a+1;
        while(temp!=NULL){
            if(c!=a){
                prev=temp;
                temp=temp->next;
            }
            //if c==a
            else{
                prev->next=list2;
                while(tailOfList2->next!=nullptr){
                    tailOfList2=tailOfList2->next;
                }
            }
            if(tailOfList2->next==nullptr){
                while(diff!=0){
                    temp=temp->next;
                    diff-=1;
                }
                tailOfList2->next=temp;
            }
            c+=1;
        }
        return list1;
    }
};








