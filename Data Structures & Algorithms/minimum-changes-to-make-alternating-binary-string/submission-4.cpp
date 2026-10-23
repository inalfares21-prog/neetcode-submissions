class Solution {
public:
    int minOperations(string s) {
        int res=0;
        string k="01";
        for(int i=0;i<s.size();i++){
            if(s[i]==k[i%2])res++;
        }
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==k[(i+1)%2])count++;
        }
        return s.size()-max(res,count);
        
    }
};