class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res(arr.size());
        res[res.size()-1]=-1;
        for(int i=arr.size()-2;i>-1;i--){
            res[i]=max(res[i+1],arr[i+1]);
        }
        return res;
        
    }
};