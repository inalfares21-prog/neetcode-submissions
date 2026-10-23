class Solution {
public:
    bool isPalindrome(int x) {
       string s=to_string(x);
       string k=s;
       reverse(s.begin(),s.end());
       return s==k;
        
    }
};