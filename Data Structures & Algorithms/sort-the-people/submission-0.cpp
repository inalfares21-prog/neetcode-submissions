class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>res;
        priority_queue<pair<int,string>>q;
        for(int i=0;i<names.size();i++){
            q.push({heights[i],names[i]});
        }
        while(q.size()>0){
            res.push_back(q.top().second);
            q.pop();
        }
        return res;

        
    }
};