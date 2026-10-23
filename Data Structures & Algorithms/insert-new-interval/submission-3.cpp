class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0;
        int end;
        int start=newInterval[0];
        int counter=0;
        vector<vector<int>> res;
        while(i<intervals.size()){
            if(newInterval[1]<intervals[i][0]){
                break;
            }
            i++;
        }
        if(i==0){
            intervals.insert(intervals.begin(), newInterval);
            return intervals;
        }
        end=max(newInterval[1],intervals[i-1][1]);
        int tmp=i;
        if(intervals[i-1][1]>=newInterval[0]){
        while(i>0){
            i--;
          
            if(newInterval[0]>intervals[i][1]){
                break;
            }
            counter++;
            start=min(start,intervals[i][0]); 
        }
        }
        intervals.erase(intervals.begin()+tmp-counter,intervals.begin()+tmp);
        intervals.insert(intervals.begin()+tmp-counter,{start,end});
        return intervals;
    

        
    }
};
