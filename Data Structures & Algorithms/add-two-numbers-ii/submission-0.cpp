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
ListNode* rev(ListNode* l){
    ListNode* prev=nullptr;
    ListNode* p=l;
    while(p){
        ListNode* tmp=p->next;
        p->next=prev;
        prev=p;
        p=tmp;
    }
    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       l1=rev(l1);
       l2=rev(l2);
       ListNode*d=new ListNode;
       ListNode*p=d;
       int c=0;
       while(l1&&l2){
        int val=(l1->val+l2->val+c)%10;
        c=(l1->val+l2->val+c)/10;
        ListNode*k=new ListNode(val);
        p->next=k;
        p=p->next;  
        l1=l1->next;
        l2=l2->next; 
       }
       while(l1){
        int val=(l1->val+c)%10;
        c=(l1->val+c)/10;
        ListNode*k=new ListNode(val);
        p->next=k;
        p=p->next;
        l1=l1->next;
       }
       while(l2){
        int val=(l2->val+c)%10;
        c=(l2->val+c)/10;
        ListNode*k=new ListNode(val);
        p->next=k;
        p=p->next;
        l2=l2->next;
       }
       if(c==1){
        ListNode*k=new ListNode(1);
        p->next=k;
       }
       return rev(d->next);

      

        
    }
};