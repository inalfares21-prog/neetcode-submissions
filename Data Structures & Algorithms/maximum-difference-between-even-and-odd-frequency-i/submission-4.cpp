class Solution {
public:

    int maxDifference(string s) {
        vector<int>res(26);
        for(char c:s){
            res[c-'a']++;
        }
        int a=0;
        int b=s.size();
        for(int i:res){
            if(i%2==1)a=max(a,i);
            else{
                if(i>0)b=min(b,i);
            }
        }
        return a-b;
    }
};