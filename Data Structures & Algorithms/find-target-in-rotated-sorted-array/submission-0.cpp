class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int m;
        while(l<r){
            m=(l+r)/2;
            if(nums[m]>=nums[0]){
                l=m+1;
            }
            else{
                r=m;
            }
        } 
        if(nums[l]>nums[0])l=0;
        r=l+nums.size()-1;
        while(l<=r){
            cout<<l<<endl;
            cout<<r<<endl;
            m=((l+r)/2)%nums.size();
            int n=(l+r)/2;
            if(nums[m]==target){
                return m;
            }
            if(nums[m]<target){
                l=n+1;
            }
            else{
                r=n-1;
            }
        }
        
        return -1;
          
    }
};

        
    
