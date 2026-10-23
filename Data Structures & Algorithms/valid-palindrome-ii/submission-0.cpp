class Solution {
    bool sol(string s,int i){
        int l=0;
        int r=s.size()-1;
        while(l<=r){
            if(l==i)l++;
            if(r==i)r--;
            if(s[r]!=s[l]){
                cout<<i<<endl;
                cout<<s[l]<<s[r]<<endl;
                return false;
                }
            l++;
            r--;
        }
        cout<<"a"<<endl;
        return true;

    }
public:
    bool validPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            if(sol(s,i))return true;
            else{
                cout<<"aaa";
            }
        }
        return false;
        
        
        
        
    }
};