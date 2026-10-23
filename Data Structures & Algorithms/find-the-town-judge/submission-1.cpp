class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>mp;
        map<int,int>m;
        
        for(int i=0;i<trust.size();i++){
            mp[trust[i][1]]++;
            m[trust[i][0]]++;
        }
        for(int i=1;i<n+1;i++){
            if(mp[i]==n-1&&m[i]==0)return i;
        }
        return -1;
        
    }
};