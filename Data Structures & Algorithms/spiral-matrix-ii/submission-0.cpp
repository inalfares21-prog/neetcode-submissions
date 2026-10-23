class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n));
        res[0][0]=1;
        bool right=true;
        bool left=false;
        bool up=false;
        bool down=false;
        int r=n-1;
        int l=0;
        int u=0;
        int d=n-1;
        int count=1;
        int i=0;
        int j=0;
        while(count<n*n){
            if(right){
                while(j<r){
                    count++;
                    j++;
                    res[i][j]=count;
                }
                right=false;
                down=true;
                u++;
                continue;  
            }
            if(left){
                while(j>l){
                    count++;
                    j--;
                    res[i][j]=count;
                }
                left=false;
                up=true;
                d--;
                continue;  
            }
            if(up){
                while(i>u){
                    count++;
                    i--;
                    res[i][j]=count;
                }
                up=false;
                right=true;
                l++;
                continue;  
            }
            if(down){
                while(i<d){
                    count++;
                    i++;
                    res[i][j]=count;
                }
                down=false;
                left=true;
                r--;
                continue;  
            }  
        }
        return res;

        
    }
};