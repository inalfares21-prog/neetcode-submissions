class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int countneg=0;
        int preffix=1;
        int suffix=1;
        int count=1;
        int res=0;
        int length=0;
        if(nums.size()==1)return nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(countneg%2==0){res=max(res,count);}
                else{
                    if(length==1){
                        res=max(res,nums[i-1]);
                    }
                    else{
                    res=max(res,max(count/suffix,count/preffix));
                    }
                }
                count=1;
                preffix=1;
                suffix=1;
                countneg=0;
                length=0;
                continue;
            }
            count=count*nums[i];
            if(nums[i]<0){
                countneg++;
                suffix=1;
            }
            if(preffix>0){
                preffix=preffix*nums[i];
            }
            if(preffix<0){
                suffix=suffix*nums[i];
            }
            length++;

        }
         if(nums[nums.size()-1]!=0){
         if(countneg%2==0){res=max(res,count);}
                else{
                    if(length==1){
                        res=max(res,nums[nums.size()]);
                    }
                    else{
                    res=max(res,max(count/suffix,count/preffix));
                    }
                }
         }
        
        return res;
        
    }
};
