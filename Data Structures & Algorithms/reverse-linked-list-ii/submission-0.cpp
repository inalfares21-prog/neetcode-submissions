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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*start=head;
        ListNode*prev=nullptr;
        for(int i=0;i<left-1;i++){
            prev=start;
            start=start->next;
        }
        ListNode*p=start;
        
        for(int i=left;i<right+1;i++){
            ListNode*tmp=start->next;
            start->next=prev;
            prev=start;
            start=tmp;
        }
        if(p->next){
            p->next->next=prev;
        }
        p->next=start;
        if(left==1)return prev;
       
        return head;

        
        
        
    }
};