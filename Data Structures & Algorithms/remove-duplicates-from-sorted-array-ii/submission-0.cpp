class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int j=0;
        int tmp=nums[nums.size()-1];
        nums.push_back((tmp+1)%2);
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])count++;
            else count=1;
            if(count<3){
                nums[j]=nums[i-1];
                j++;
            }
        }
        return j;
    }
};