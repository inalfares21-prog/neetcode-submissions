class Solution {
public:
    string convertToTitle(int n) {
        string res;
        while(n>0){
            int c=n%26;
            if(c==0){
                n--;
                res.push_back('Z');
            }
            else{
                res.push_back('A'+c-1);
            }
            n=n/26;
        }
        reverse(res.begin(),res.end());
        return res;

        
    }
};