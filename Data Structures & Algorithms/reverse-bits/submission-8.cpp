class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        int res=0;
        int count=0;
        while(n>0){
            res=res*2+n%2;
            n/=2;
            count++;
        }
        while(count<32){
            res=res*2;
            count++;
        }
        return res;
    }
};
