class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(),arr1.end());
        map<int,int>mp;
        for(int i:arr1){
            mp[i]++;

        }
        set<int>s(arr2.begin(),arr2.end());
        vector<int>res;
        for(int i:arr2){
            while(mp[i]>0){
                res.push_back(i);
                mp[i]--;
            }
        }
        for(int i:arr1){
            if(!s.count(i))res.push_back(i);
        }
        return res;
        
    }
};