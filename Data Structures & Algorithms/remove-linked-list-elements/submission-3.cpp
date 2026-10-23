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
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head!=nullptr&&head->val==val){cout<<"aaa";head=head->next;}
        ListNode*p=head;
         ListNode*prev=head;
         if(head==nullptr)return head;
         while(p!=nullptr){
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