class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>curr(1,1);
        if(rowIndex==0)return curr;
        while(curr.size()<rowIndex+1){
            vector<int>res(curr.size()+1);
            res[0]=1;
            res[res.size()-1]=1;
            for(int i=1;i<curr.size();i++){
                res[i]=curr[i]+curr[i-1];
            }
            curr=res;
        }
        return curr;
        
    }
};