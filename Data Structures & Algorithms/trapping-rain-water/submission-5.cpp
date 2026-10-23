class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int j=0;
        int curr=0;
        for(int i=1;i<height.size();i++){
            if(height[i]>=height[j]){
                j=i;
                res=res+curr;
                curr=0;
            }
            else{
                curr=curr+height[j]-height[i];
            }
        }
        int k=height.size()-1;
        for(int i=height.size()-2;i>j;i--){
            if(height[i]>=height[k]){
                k=i;
            }
            else{ 
                res=res+height[k]-height[i];
            }
        }
        return res;

        
    }
};
