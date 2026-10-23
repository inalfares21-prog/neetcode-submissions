class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if(s[s.size()-1]=='1')return false;
        vector<int>tmp(s.size(),0);
        tmp[minJump]=1;
        if(maxJump<s.size()-1)tmp[maxJump+1]-=1;
        int sum=0;
        for(int i=minJump;i<s.size();i++){
            sum+=tmp[i];
            if(sum<=0)continue;
            if(s[i]=='0'){
                if(i+minJump<s.size())tmp[i+minJump]+=1;
                if(i+maxJump<s.size()-1)tmp[i+maxJump+1]-=1;
            }
        }
        return sum>0;


        
    }
};