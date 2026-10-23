class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int j=1;
        while(j<arr.size()&&arr[j-1]==arr[j])j++;
        if(j==arr.size())return 1;
        int count=2;
        int res=count;
        for(int i=j+1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
            while(i<arr.size()&&arr[i]==arr[i-1]){
                
                count=2;
                i++;
                
            }
            continue;
            }
            
           
            if((arr[i]<arr[i-1])^(arr[i-1]<arr[i-2]))count++;
            else{
                count=2;
            }
            res=max(res,count);
        }
        return res;
        
    }
};