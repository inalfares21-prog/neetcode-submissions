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
         for(int i=count;i<32;i++){
            res*=2;
         }
         return res;
        
    }
};
