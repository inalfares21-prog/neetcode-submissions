class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
        priority_queue<pair<int,string>>p;
        for(int i=0;i<names.size();i++){
            p.push({h[i],names[i]});
        }
        vector<string>res;
        while(p.size()>0){
            res.push_back(p.top().second);
            p.pop();
        }
        return res;
        
    }
};