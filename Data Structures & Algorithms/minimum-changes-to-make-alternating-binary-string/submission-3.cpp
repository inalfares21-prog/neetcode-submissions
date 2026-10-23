class Solution {
public:
    int minOperations(string s) {
        int a=0;
        int b=0;
        string k="01";
        for(int i=0;i<s.size();i++){
            if(s[i]!=k[i%2])a++;
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=k[(i+1)%2])b++;
        }
        return min(a,b);
        
    }
};