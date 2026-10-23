class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,string>>q;
        for(int i=0;i<names.size();i++){
            q.push({heights[i],names[i]});
        }
        vector<string>res;
        while(q.size()>0){
            string x=q.top().second;
            q.pop();
            res.push_back(x);
        }
        return res;
        
    }
};