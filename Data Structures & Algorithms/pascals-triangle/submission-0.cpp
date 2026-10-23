class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>out;
        vector<int>curr(1);
        curr[0]=1;
        vector<int>res(2);
        out.push_back(curr);
       
        while(curr.size()<numRows){
            res[0]=1;
            res[res.size()-1]=1;
            for(int i=1;i<curr.size();i++){
                res[i]=curr[i-1]+curr[i];
               
            }
             out.push_back(res);
                curr=res;
                vector<int>tmp(res.size()+1);
                res=tmp;
        }
        return out;

      
        
    }
};