class Solution {
public:
bool sol (string s,int i){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(l==i)l++;
        if(i==r)r--;
        if(s[l]!=s[r]){
            return false;
        }
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