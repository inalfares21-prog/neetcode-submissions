class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int curr=0;
        int res=0;
        int count=0;
        for(int i=0;i<arr.size();i++){
            curr=arr[i];
            while(i<arr.size()&&count<=curr){
                if(arr[i]<=curr)count++;
                else{
                    curr=arr[i];
                    count++;
                }
                curr=max(curr,i);
                i++;
            }
            i--;
            res++;
        }
        return res;
    }
};
