class Solution {
public:
    int getSum(int a, int b) {
        int c=0;
        int res=0;
        for(int i=0;i<32;i++){
            int x=a&1;
            int y=b&1;
            int add=x^y^c;
            c=(x&y)|(x&c)|(y&c);
            res=res|add<<i;
            a=a>>1;
            b=b>>1; 
        }
        return res;
        
    }
};
