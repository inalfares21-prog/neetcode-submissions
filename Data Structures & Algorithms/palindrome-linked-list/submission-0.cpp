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
        string s;
        ListNode*p=head;
        while(p){
            s.push_back(p->val);
            p=p->next;
        }
        string t=s;
        reverse(t.begin(),t.end());
        return t==s;

        
    }
};