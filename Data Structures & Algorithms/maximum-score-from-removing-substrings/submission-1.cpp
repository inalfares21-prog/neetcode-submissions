class Solution {
public:
    int maximumGain(string s, int x, int y) {
        char target='b';
        int res=0;
        if(y<x){
            target='a';
            swap(x,y);
        }
        for(int i=0;i<s.size();i++){
            int count=0;
            int second=0;
            while(s[i]=='a'||s[i]=='b'){
                
                if(s[i]==target){
                    count++;
                }
                else{
                    if(count>0){
                        count--;
                        res+=y;
                    }
                    else{
                        second++;
                    }
                }
                i++;
            }
            res+=x*min(second,count);
        }
        return res;

    }
};
