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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        ListNode*p=head;
        int s=0;
        while(p){
            p=p->next;
            s++;
        }
        k=k%s;
        if(k==0)return head;
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        fast->next=head;
        ListNode*r=slow->next;
        slow->next=nullptr;
        return r;
        
    }
};