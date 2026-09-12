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
    int GCD(int n1,int n2) {
        if (n1==n2) return n1;
        int max = min(n1,n2);
        int gcd;
        for(int i=1;i<=max;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next!=NULL){
            int num = GCD(temp->val,temp->next->val);
            ListNode *newNode = new ListNode(num,temp->next);
            temp->next=newNode;
            temp=temp->next->next;
        }
        return head;
    }
};