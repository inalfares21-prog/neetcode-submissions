class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res=0;
        int c=0;
        while(n>0){
            res=res*2+n%2;
            n/=2;
            c++;
        }
        while(c<32){
            res=res*2;
            c++;
        }
        return res;
        
    }
};
