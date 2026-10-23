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
        while(head){
            res=res+(to_string(head->val));
            head=head->next;
            
        }
        string tmp=res;
        reverse(res.begin(),res.end());
        return res==tmp;
        
    }
};