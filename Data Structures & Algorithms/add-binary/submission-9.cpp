class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
       string  res;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>-1&&j>-1){
            int sum=(a[i]-'0')+(b[j]-'0')+c;
            res=res+to_string(sum%2);
            c=sum/2;
            i--;
            j--;
        }
        while(i>-1){
            int x=(a[i]-'0')+c;
            res=res+to_string(x%2);
            c=x/2;
            i--;
        }
         while(j>-1){
            int x=(b[j]-'0')+c;
            res=res+to_string(x%2);
            c=x/2;
            j--;
        }
        if(c==1)res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
        
    }
};