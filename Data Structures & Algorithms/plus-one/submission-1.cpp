class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res(digits.size());
        res[digits.size()-1]=(digits[digits.size()-1]+1)%10;
        int c=(digits[digits.size()-1]+1)/10;

        for(int i=digits.size()-2;i>-1;i--){
            res[i]=(digits[i]+c)%10;
            c=(digits[i]+c)/10;
            
        }
        if(c==1){
            res.insert(res.begin(),1);
        }
      
        return res;

        
    }
};
