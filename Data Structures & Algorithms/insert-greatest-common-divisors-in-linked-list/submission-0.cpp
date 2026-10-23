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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next)return head;
        ListNode*p=head;
        ListNode*q=head->next;
        while(q){
            ListNode*k=new ListNode(gcd(q->val,p->val));
            p->next=k;

            p->next->next=q;
            p=q;
            q=q->next;  
        }
        return head;
    }
};