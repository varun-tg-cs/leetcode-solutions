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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2 =l2;
        
        ListNode *newNode;
        ListNode *head=NULL;
        ListNode *tail=NULL;
        int carry=0,addValue=0,digit=0;
        while(temp1!=NULL || temp2!=NULL){
            if(temp1!=NULL && temp2!=NULL){
                addValue = temp1->val + temp2->val + carry;
                if(head==NULL){
                    digit = addValue%10;
                    carry=addValue/10;
                    newNode = new ListNode(digit);
                    head = newNode;
                    tail = newNode;
                }
                else{
                    digit = addValue%10;
                    carry=addValue/10;
                    newNode = new ListNode(digit);
                    tail->next=newNode;
                    tail = newNode;
                }
                temp1=temp1->next;
                temp2=temp2->next;
            }
            // i.e temp2 is NULL
            else if(temp1!=NULL){
                addValue = temp1->val+carry;
                digit = addValue%10;
                carry = addValue/10;
                newNode = new ListNode(digit);
                tail->next=newNode;
                tail = newNode;
                temp1=temp1->next;
            }
            // i.e temp1 is NULL
            else{
                addValue = temp2->val+carry;
                digit = addValue%10;
                carry = addValue/10;
                newNode = new ListNode(digit);
                tail->next=newNode;
                tail = newNode;
                temp2=temp2->next;
            }
        }
        if(carry==1){
            newNode = new ListNode(carry);
            tail->next=newNode;
            tail=newNode;
        }
        return head;
    }
};