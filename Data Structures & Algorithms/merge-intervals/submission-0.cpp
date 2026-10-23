class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        vector<int>tmp(2,-1);
        int end=0;
        for(int i=0;i<intervals.size();i++){
            if(tmp[0]==-1){
                tmp[0]=intervals[i][0];
                end=intervals[i][1];
                continue;
            }
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
            }
            else{
                tmp[1]=end;
                res.push_back(tmp);
                tmp=vector<int>(2,-1);
                tmp[0]=intervals[i][0];
                end=intervals[i][1];
            }
        }
        tmp[1]=end;
        res.push_back(tmp);
        return res;
        
    }
};
