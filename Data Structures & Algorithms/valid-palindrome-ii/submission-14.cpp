class Solution {
public:
bool sol(int i,string s){
    int l=0;
        int r=s.size()-1;
        while(l<r){
            if(!isalnum(s[l])||i==l){
                l++;
                continue;
            }
            if(!isalnum(s[r])||i==r){
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r]))return false;
            l++;
            r--;
        }
        return true;
        
}
    bool validPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(sol(i,s))return true;
        }
        return false;
        
        
    }
};