class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        map<int,int>mp;
        vector<int>res(nums.size()-k+1);
        res[0]=q.top();
        int j=1;
        for(int i=k;i<nums.size();i++){
            mp[nums[i-k]]++;
            q.push(nums[i]);
            while(q.size()>0){
                if(!mp.count(q.top())||mp[q.top()]==0)break;
                mp[q.top()]--;
                q.pop();
            } 
            res[j]=q.top();
            j++;   
        }
        return res;
        
    }
};
