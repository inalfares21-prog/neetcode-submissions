class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res=0;
        int a=0;
        int b=0;
        int first=fruits[0];
        int second=0;
        int count=1;
        for(int i:fruits){
            if(i!=first){second=i;break;}
            a++;   
        }
        res=a;
        for(int i=a;i<fruits.size();i++){
            if(fruits[i]!=second){
                if(fruits[i]!=first){
                    first=fruits[i-1];
                    second=fruits[i];
                    a=count;
                    b=1;
                }
                else{
                    a++;
                }
            }
            else{
                b++;
            }
            if(fruits[i]!=fruits[i-1])count=1;
            else{
                count++;
            }
            res=max(res,a+b);
        }
        return res;  
    }
};