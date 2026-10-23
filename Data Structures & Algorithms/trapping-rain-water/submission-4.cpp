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
        cout<<res<<endl;
        int k=height.size()-1;
        cout<<k<<endl;
        for(int i=height.size()-2;i>j;i--){
            cout<<"aaaaaaa"<<endl;
            if(height[i]>=height[k]){
                cout<<height[i]<<endl;
                k=i;
            }
            else{
                cout<<height[k];
                res=res+height[k]-height[i];
            }
        }
        return res;

        
    }
};
