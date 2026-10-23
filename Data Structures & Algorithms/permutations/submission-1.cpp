class Solution {
private:
void sol(vector<vector<int>>&s,vector<int>&vec,vector<int>&nums,int l,vector<bool>&pr){
    for(int i=0;i<nums.size();i++){
        if(pr[i]==true){
            
            continue;
        }
        if(l==nums.size()-1){
            vec.push_back(nums[i]);
            s.push_back(vec);
            vec.pop_back();
            return;
        }
        pr[i]=true;
        int k=i;
        vec.push_back(nums[i]);
        sol(s,vec,nums,l+1,pr);
        
        vec.pop_back();
        pr[k]=false;
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>pr(7,false);
        vector<vector<int>>s;
        vector<int>vec;
        sol(s,vec,nums,0,pr);
        return s;
        
    }
};
