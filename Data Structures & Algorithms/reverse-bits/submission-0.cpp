class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res=0;
        int counter=0;
        while(n>0){
            res=res*2+n%2;
            n=n/2;
            counter++;

        }
        while(counter<32){
            res=res*2;
            counter++;
        }
        return res;

        
    }
};
