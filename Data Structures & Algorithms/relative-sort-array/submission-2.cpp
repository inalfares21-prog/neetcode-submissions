class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        for(int i:arr1){
            m[i]++;
        }
        vector<int>res;
        for(int i:arr2){
            for(int j=0;j<m[i];j++){
                res.push_back(i);
            }
        }
        sort(arr1.begin(),arr1.end());
        set<int>s(arr2.begin(),arr2.end());
        for(int i:arr1){
            if(!s.count(i)){
                res.push_back(i);
            }
        }
        return res;
        
    }
};