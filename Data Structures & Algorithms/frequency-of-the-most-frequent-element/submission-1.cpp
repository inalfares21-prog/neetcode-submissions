class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        if(nums.size()==1)return 1;
        sort(nums.begin(), nums.end());
        int res=1;
        int count=1;
        int j=nums.size()-1;
        for(int i=nums.size()-2;i>-1;i--){
            k-=nums[j]-nums[i];
            count++;
            if(k<0){
                k+=(count-1)*(nums[j]-nums[j-1]);
                j--;
                count--;
            }
            res=max(res,count);
            cout<<k<<endl;
        }
        return res;  
    }
};