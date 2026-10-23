class Solution {
public:
    int minOperations(string s) {
        int count=0;
        string k="10";
        for(int i=0;i<s.size();i++){
            if(k[i%2]!=s[i])count++;
        }
        int res=0;
        for(int i=0;i<s.size();i++){
            if(k[(i+1)%2]!=s[i])res++;
        }
        return min(res,count);

        
    }
};