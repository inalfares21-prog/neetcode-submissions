class Solution {
public:
bool sol(int l,int r,string &s,bool a){
    while(l<r){
        if(s[l]!=s[r]){
            if(a)return false;
            else{
                return sol(l+1,r,s,true)||sol(l,r-1,s,true);
            }
        }
        l++;
        r--;
    }
    return true;
}

    bool validPalindrome(string s) {  
        return sol(0,s.size()-1,s,false) ;
    }
};