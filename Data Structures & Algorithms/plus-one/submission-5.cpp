class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int c=1;
        for(int i=digits.size()-1;i>-1;i--){
            int tmp=digits[i];
            digits[i]=(digits[i]+c)%10;
            c=(tmp+c)/10;

        }
        if(c==1){
            vector<int>res(digits.size()+1);
            res[0]=1;
            return res;
        }
        return digits;
    }
};
