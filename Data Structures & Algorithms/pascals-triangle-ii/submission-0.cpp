class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res;
        if(rowIndex==0)return {1};
        vector<int>curr(1,1);
        while(res.size()<rowIndex+1){
            res=vector<int>(curr.size()+1);
            res[0]=1;res[res.size()-1]=1;
            for(int i=1;i<res.size()-1;i++){
                res[i]=curr[i-1]+curr[i];
            }
            curr=res;
        }
        return res;
        
    }
};