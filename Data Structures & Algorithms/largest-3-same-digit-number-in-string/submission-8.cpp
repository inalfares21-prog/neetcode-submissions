class Solution {
public:
    string largestGoodInteger(string nums) {
        string res;
        for(int i=2;i<nums.size();i++){
            string tmp;
            tmp.push_back(nums[i]);
             tmp.push_back(nums[i-1]);
              tmp.push_back(nums[i-2]);
              if(nums[i]==nums[i-1]&&nums[i]==nums[i-2]){
                res=max(res,tmp);
              }

        }
        return res;
        
    }
};