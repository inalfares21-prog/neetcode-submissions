class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>res;
        for(string s:op){
            if(s=="+"){
                res.push_back(res[res.size()-1]+res[res.size()-2]);
                continue;
            }
            if(s=="D"){
                res.push_back(res[res.size()-1]*2);
                continue;
            }
            if(s=="C"){
                res.pop_back();
                continue;
            }
            cout<<s;
            res.push_back(stoi(s));

        }
        int sum=0;
        for(int i:res){
            sum+=i;
        }
        return sum;
        
    }
};