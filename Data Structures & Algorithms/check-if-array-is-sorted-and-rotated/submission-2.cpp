class Solution {
public:
    bool check(vector<int>& nums) {
        int res=1;
        int count=1;
        for(int i=1;i<nums.size()*2;i++){
            int c=nums.size();
            if(nums[(i+c)%c]<nums[(i-1+c)%c]){
                res=1;
            }
            else{
                res++;
            }
            count=max(count,res);
        }
        cout <<res;
        return count==nums.size();
        
    }
};