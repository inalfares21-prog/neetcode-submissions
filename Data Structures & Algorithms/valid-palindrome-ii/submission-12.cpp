class Solution {
public:
bool sol(string s,int i){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(l==i){
            l++;
            continue;
        }
        if(r==i){
            r--;
            continue;
        }
        if(s[r]!=s[l])return false;
        l++;
        r--;
    }
    return true;
}
    bool validPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(sol(s,i))return true;
        }
        return false;
        
    }
};