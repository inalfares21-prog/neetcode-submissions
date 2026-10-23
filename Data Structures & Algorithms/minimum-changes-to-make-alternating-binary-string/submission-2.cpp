class Solution {
public:
    int minOperations(string s) {
        string k="10";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=k[i%2])count++;
        }
        int res=count;
        count=0;
         for(int i=0;i<s.size();i++){
            if(s[i]!=k[(i+1)%(2)])count++;
        }
        return min(res,count);
        
    }
};