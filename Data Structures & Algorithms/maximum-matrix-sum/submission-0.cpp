class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int count=0;
        int m=abs(matrix[0][0]);
        for(auto&a:matrix){
            for(auto&b:a){
               
                m=min(m,abs(b));
                if(b<0)count++;
                sum+=abs(b);
            }
        }
        if(count%2==0)return sum;
        sum-=2*m;
        return sum;
        
    }
};