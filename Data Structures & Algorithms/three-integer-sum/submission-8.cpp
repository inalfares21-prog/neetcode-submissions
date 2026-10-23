class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int r=nums.size()-1;
        int l=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            if(i<nums.size()-1&&nums[i]==nums[i+1]){
                int r=nums.size()-1;
                if(i<nums.size()-2&&nums[i+2]==0&&nums[i]==0)res.push_back({0,0,0});
                while(nums[r]>nums[i]){
                    if(nums[i]+nums[r]+nums[i]==0)  {cout<<nums[r]<<nums[i]<<endl;res.push_back({nums[i],nums[i],nums[r]});break;}
                    r--;
                }
                int l=0;
                 while(l<i){
                    if(nums[i]+nums[i]+nums[l]==0)  {res.push_back({nums[i],nums[i],nums[l]});break;}
                    l++;
                }
                r=nums.size()-1;
                l=0;
            while(nums[l]<nums[i]&&nums[r]>nums[i]){
                if(l>0&&nums[l-1]==nums[l]){
                    l++;
                    continue;
                }
                if(r<nums.size()-1&&nums[r+1]==nums[r]){
                    r--;
                    continue;
                }
                int s=nums[i]+nums[l]+nums[r];
                if(s==0){
                    res.push_back({nums[l],nums[i],nums[r]});
                    l++;
                    }
                if(s>0){
                    r--;
                }
                if(s<0){
                    l++;
                }
            }
                continue;   
            }
            int r=nums.size()-1;
            int l=0;
            while(l<i&&r>i){
                if(l>0&&nums[l-1]==nums[l]){
                    l++;
                    continue;
                }
                if(r<nums.size()-1&&nums[r+1]==nums[r]){
                    r--;
                    continue;
                }
                int s=nums[i]+nums[l]+nums[r];
                if(s==0){
                    res.push_back({nums[l],nums[i],nums[r]});
                    l++;
                    }
                if(s>0){
                    r--;
                }
                if(s<0){
                    l++;
                }
            }
        }
        return res;
        
    }
};
