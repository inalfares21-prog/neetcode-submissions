class Solution {
public:
    int minBitFlips(int start, int goal) {
        int res=0;
        while(start>0&&goal>0){
            if(start%2!=goal%2)res++;
            start/=2;
            goal/=2;
        }
        while(start>0){
            if(start%2==1)res++;
            start/=2;
        }
         while(goal>0){
            if(goal%2==1)res++;
            goal/=2;
        }
        return res;



    }
};
