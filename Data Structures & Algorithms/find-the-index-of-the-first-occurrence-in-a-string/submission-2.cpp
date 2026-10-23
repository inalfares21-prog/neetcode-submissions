class Solution {
public:
int sol(int i,string s,string n){
    for(int j=i;j<n.size()+i;j++){
        if(s[j]!=n[j-i])return -1;
    }
    return i;
}
    int strStr(string h, string n) {
        for(int i=0;i<h.size();i++){
            if(h[i]==n[0]){
                if(sol(i,h,n)!=-1)return i;
            }
        }
        return -1;
       
        
    }
};