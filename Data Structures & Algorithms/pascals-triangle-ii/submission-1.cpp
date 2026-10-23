class Solution {
public:
    vector<int> getRow(int i) {
        vector<int>curr(1,1);
        if(i==0)return curr;
        while(curr.size()<i+1){
            vector<int>res(curr.size()+1);
            res[0]=1;res[res.size()-1]=1;
            for(int j=1;j<res.size()-1;j++){
                res[j]=curr[j-1]+curr[j];
            }
            curr=res;
        }
        return curr;
        
    }
};