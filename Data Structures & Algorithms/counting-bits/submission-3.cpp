class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>res;
        res.push_back(0);
        int count=1;
        for(int i=1;i<n+1;i++){
            if(i==count){
                res.push_back(1);
                count=count*2;
            }
            else{
                res.push_back(res[i-count/2]+1);
            }
        }
        return res;
    }
};
