class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>m0;
        map<int,int>m1;
        for(int i=0;i<trust.size();i++){
            m0[trust[i][0]]++;
            m1[trust[i][1]]++;
            
        }
        for(int i=1;i<=n;i++){
            cout<<m1[n];
            if(m1[i]==n-1&&m0[i]==0){return i;}
        }
        return -1;
        
    }
};