class Solution {
public:
    bool isPalindrome(int x) {
        string res=to_string(x);
        string t=res;
        reverse(res.begin(),res.end());
        return res==t;
        
    }
};