class Solution {
public:
    int maximumSwap(int num) {
        vector<int>res(10);
        int tmp=num;
        while(tmp>0){
            res[tmp%10]++;
            tmp/=10;
        }
        int tmp2=num;
        int val=0;
        int swpv=0;
        int p=1;
        int ps=1;
        int s=0;

        while(tmp2>0){
            int d=tmp2%10;
            if(d>val){
                for(int i=d-1;i>-1;i--){
                    if(res[i]>0){
                        val=d;
                        s=p;
                    }
                }
            }
            else{
                if(d<val){
                    swpv=d;
                    ps=p;
                }
            }

            res[d]--;
            p=p*10;
            tmp2/=10;
            
        }
        num=num+(swpv-val)*s+(val-swpv)*ps;
        return num;

    }
};
