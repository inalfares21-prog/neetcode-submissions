class Solution {
public:
    int maxDifference(string s) {
        vector<int>res(26);
        for(char c:s){
            res[c-'a']++;
        }
        int a=s.size();
        int b=0;
        for(int i:res){
            if(i==0)continue;
            if(i%2==1)b=max(b,i);
            if(i%2==0)a=min(a,i);
        }
        return b-a;
        
    }
};