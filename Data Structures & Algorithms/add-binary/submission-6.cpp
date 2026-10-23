class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i=a.size()-1;
        int j=b.size()-1;
        int c=0;
        
        while(i>-1&&j>-1){
            int x=a[i]-'0';
            int y=b[j]-'0';
            int add=(x+y+c)%2;
            res=res+to_string(add);
            c=(c+x+y)/2;
            i--;
            j--;    
        }
        while(i>-1){
            int x=a[i]-'0';
            int add=(x+c)%2;
            c=(x+c)/2;
            res=res+to_string(add);
            i--;
        }
         while(j>-1){
            int x=b[j]-'0';
            int add=(x+c)%2;
            c=(x+c)/2;
            res=res+to_string(add);
            j--;
        }
        if(c==1){
        res.push_back('1');
        }
        reverse(res.begin(),res.end());
        
        return res;
    }
};