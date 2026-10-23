class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int res=0;
        int m=pow(10,9)+7;
        vector<int>p2(nums.size());
        p2[0]=1;
        for(int i=1;i<p2.size();i++){
            p2[i]=(p2[i-1]*2)%m;  
        }
        while(l<=r){
            while(r>=0&&nums[r]+nums[l]>target){
                r--;
            }
            if(r<l)break;
            res=(res+p2[r-l])%m;
            l++;
        }
        return res;

        
    }
};