class Solution {
public:
    int minOperations(string s) {
        string r="10";
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=r[i%2])res++;
        }
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=r[(i+1)%2])count++;
        }

        return min(count ,res);
        
    }
};