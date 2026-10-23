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
    ListNode* reverseList(ListNode* head) {
        ListNode*d=nullptr;
        ListNode*c;
        if(head==nullptr ){
            return nullptr;
        }
        while(head->next!=nullptr){
            c=head;
            head=head->next;
            c->next=d;
            d=c;
        }
        head->next=d;

        return head;
    }
};
