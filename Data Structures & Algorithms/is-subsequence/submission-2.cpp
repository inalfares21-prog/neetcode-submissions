class Solution {
public:
bool sol(string s,string t){
    int i=0;
    for(char c:t){
        if(c==s[i])i++;
        if(i>s.size()-1)return true;
    }
    return false;
}
    bool isSubsequence(string s, string t) {
        int j=0;
        if(s.size()==0)return true;
        for(char c:t){
            if(c==s[0]){
                if(sol(s,t))return true;
            }
        }
        return false;
      
        
    }
};