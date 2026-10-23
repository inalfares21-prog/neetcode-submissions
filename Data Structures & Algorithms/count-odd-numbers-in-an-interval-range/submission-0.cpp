class Solution {
public:
    int countOdds(int low, int high) {
        if(-(low-high+1)%2==0)return (-(low-high)+1)/2;
         if(-(low-high+1)%2==1)return (-(low-high))/2+low%2;
        
    }
};