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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode*p=head;
        while(p!=nullptr){
            n++;
            p=p->next;
        }
        int c=(n)/2;
        p=head;
        for(int i=0;i<c;i++){
            p=p->next;
        }
        return p;

        
        
    }
};