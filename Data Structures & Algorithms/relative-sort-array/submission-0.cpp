class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>res;
       
        unordered_set<int>s;
        for(int x:arr2){
            s.insert(x);
        }
      
            for(int i=0;i<arr2.size();i++){
                  for(int x:arr1){
                    if(x==arr2[i]){
                    res.push_back(x);
                    }

                  }
            }
            sort(arr1.begin(),arr1.end());
                  for(int x:arr1){
                    if(!s.count(x)){
                        res.push_back(x);
                    }
                  }
            
               
            
           
        return res;
        
    }
};