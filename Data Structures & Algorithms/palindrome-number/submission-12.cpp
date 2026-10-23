class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string res=to_string(x);
        string tmp=res;
        reverse(tmp.begin(),tmp.end());
        return res==tmp;
        
    }
};