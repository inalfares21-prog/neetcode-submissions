class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>res;
        int out=0;
        for(string s:operations){
            if(s=="+"){
                res.push_back(res[res.size()-1]+res[res.size()-2]);
                continue;
            }
            
            if(s=="C"){
                res.pop_back();
                continue;
            }
            if(s=="D"){
                res.push_back(res[res.size()-1]*2);
                continue;
            }
            int c=stoi(s);
            res.push_back(c);
           
        }
        for(int i:res){
            out+=i;
        }
        return out;

        
    }
};