class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> res(code.size());
        if(k>0){
        for(int i=0;i<code.size();i++){
            for(int j=i+1;j<i+k+1;j++){
                res[i]+=code[j%code.size()];
            }
        }
        }
        else{
            k=abs(k);
            for(int i=0;i<code.size();i++){
                for(int j=i-1;j>i-k-1;j--){
                    res[i]+=code[(j+code.size())%code.size()];
                }
            }
        }
        return res;

    }
};
