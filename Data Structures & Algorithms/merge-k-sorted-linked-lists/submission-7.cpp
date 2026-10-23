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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>q;
        for(ListNode*i:lists){
            while(i!=nullptr){
                q.push({i->val,i});
                i=i->next;
            }
        }
        ListNode*dummy=new ListNode;
        ListNode*a=dummy;
        while(q.size()>0){
            a->next=q.top().second;
            a=a->next;
            q.pop();
        }
        return dummy->next;

        
    }
};
