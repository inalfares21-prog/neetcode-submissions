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
private:
void sol (ListNode* &head,ListNode*pr, int k,int c,int sum){
   
    if(sum-c<k)return;
    ListNode* p=head;
    ListNode* tmp=head;
    ListNode* prev=pr;
    ListNode* next;
    int count =0;
    while(p!=nullptr&&count<k){
        next=p->next;
        p->next=prev;
        prev=p;
        p=next; 
        count++; 
        c++;
    }
    head->next=p;
    if(prev==nullptr)return;
    head=prev;
   
   
    sol(tmp->next,tmp,k,c,sum);

}
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int sum=0;
        ListNode* p;
        p=head;
        while(p!=nullptr){
            p=p->next;
            sum++;
        }
        sol(head,nullptr,k,0,sum);
        return head;

        
    }
};
