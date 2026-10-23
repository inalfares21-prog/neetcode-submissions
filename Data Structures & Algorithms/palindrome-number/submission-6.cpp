class Solution {
public:
    bool isPalindrome(int x) {
       string t=to_string(x);
       string s=t;
       reverse(t.begin(),t.end());
       return t==s;
        
    }
};