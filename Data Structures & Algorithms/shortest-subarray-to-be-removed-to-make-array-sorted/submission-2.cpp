class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int l=1;
        while(l<arr.size()&&arr[l-1]<=arr[l])l++;
        l--;
        if(l==arr.size()-1)return 0;
        int r=arr.size()-2;
        while(r>=0&&arr[r+1]>=arr[r])r--;
        r++;
        int i=l;
        int c=arr.size();
        int res=max(l+1,c-r);
        int j=arr.size()-1;
        while(i>=0&&j>=r){
            if(arr[i]>arr[j])i--;
            else j--;
            int curr=i+arr.size()-j;
            res=max(res,curr);
        }    
        return arr.size()-res;

       
        

    }
};
