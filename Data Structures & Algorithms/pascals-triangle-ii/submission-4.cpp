class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int>curr(1);
        curr[0]=1;
        while(curr.size()<rowIndex+1){
            vector<int>res(curr.size()+1,1);
            for(int i=1;i<curr.size();i++){
                res[i]=curr[i]+curr[i-1];
            }
            curr=res;
        }
        return curr;
    }
};