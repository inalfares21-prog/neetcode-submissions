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
    bool isPalindrome(ListNode* head) {
        string res;
        ListNode* p=head;
        while(p){
            res.push_back(p->val-'0');
            p=p->next;
        }
        string t=res;
        reverse(t.begin(),t.end());
        return t==res;
        
    }
};