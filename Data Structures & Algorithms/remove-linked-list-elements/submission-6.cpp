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
    ListNode* removeElements(ListNode* head, int val) 
    {
        while(head&&head->val==val)head=head->next;
        if(!head)return head;
        ListNode*p=head;
        ListNode*prev=nullptr;
        while(p){
            if(p->val==val){
                prev->next=p->next;
            }
            else{
                prev=p;
            }
            p=p->next;
        }
        return head;

        
    }
};