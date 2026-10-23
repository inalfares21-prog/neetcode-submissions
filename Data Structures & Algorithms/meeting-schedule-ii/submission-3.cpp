/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.size()==0)return 0;
        priority_queue<int,vector<int>,greater<int>>q;

        sort(intervals.begin(),intervals.end(),[](const Interval&a,const Interval& b){return a.start<b.start;});
        q.push(intervals[0].end);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start<q.top()){
                q.push(intervals[i].end);  
            }
            else{
                q.pop();
                q.push(intervals[i].end);
            }
        }
        return q.size();
        
    }
};
