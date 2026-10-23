class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(k==0)return;
        int tmp=nums[nums.size()-1];
        for(int j=0;j<k-1;j++){
            for(int i=nums.size()-2;i>-1;i--){
                nums[i+1]=nums[i];
            }
            nums[0]=nums[nums.size()-1];
        }
        for(int i=nums.size()-2;i>k-2;i--){
            nums[i+1]=nums[i];
        }
        nums[k-1]=tmp;
    }
};