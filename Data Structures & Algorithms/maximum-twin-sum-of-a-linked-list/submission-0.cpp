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
    int pairSum(ListNode* head) {
        ListNode*p=head;
        int count=1;
        while(p){
            count++;
            p=p->next;
        }
        p=head;
        for(int i=0;i<count/2;i++){
            p=p->next;
        }
        ListNode*prev=nullptr;
        while(p){
            ListNode*tmp=p->next;
            p->next=prev;
            prev=p;
            p=tmp;
        }
        ListNode*end=prev;
        int res=0;
        ListNode*start=head;
        for(int i=0;i<count/2;i++){
            res=max(start->val+end->val,res);
            start=start->next;
            end=end->next;
        }
        return res;

        
        
    }
};