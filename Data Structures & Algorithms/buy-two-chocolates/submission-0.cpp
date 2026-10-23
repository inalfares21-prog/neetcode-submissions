class Solution {
public:
    int buyChoco(vector<int>& money, int k) {
        int a=min(money[0],money[1]);
        int b=max(money[0],money[1]);
        for(int i=2;i<money.size();i++){
            if(money[i]<=a){
                b=a;
                a=money[i];
                continue;
            }
            if(money[i]<b){
                b=money[i];
            }
        }
        if(k-a-b<0)return k;
        return k-a-b;
         
    }
};