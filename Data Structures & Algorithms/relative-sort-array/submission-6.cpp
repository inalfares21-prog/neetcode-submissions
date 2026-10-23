class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        vector<int>res;
        map<int,int>mp;
        for(int i:arr1){
            mp[i]++;
        }
        set<int>s(arr2.begin(),arr2.end());
        for(int i:arr2){
            for(int j=0;j<mp[i];j++){
                res.push_back(i);
            }
        }
        for(int i:arr1){
            if(!s.count(i)){
                res.push_back(i);
            }
        }
        return res;
        
    }
};