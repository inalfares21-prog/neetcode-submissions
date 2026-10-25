class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long res=0;
        priority_queue<int>q(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            int c=q.top();
            res+=c;
            q.pop();
            if(c%3!=0)c+=3;
            q.push(c/3);
        }
        return res;

    }
};
