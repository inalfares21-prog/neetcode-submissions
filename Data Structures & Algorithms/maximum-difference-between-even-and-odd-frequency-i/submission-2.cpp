class Solution {
public:
    int maxDifference(string s) {
        int a=0;
        int b=s.size();
        
        map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        for(char c:s){
         if(m[c]%2==0){
            b=min(b,m[c]);
         }
         else{
            a=max(a,m[c]);
         }
        }
        return a-b;
        
    }
};