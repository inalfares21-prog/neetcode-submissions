class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int res=0;
        int j=0;
        chars.push_back('*');
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){count++;}
            else{
                if(count!=1){
                    string tmp=to_string(count);
                    chars[j]=chars[i-1];
                    j++;
                    for(char c:tmp){
                        chars[j]=c;
                        j++;
                    }
                    res+=tmp.size();
                    count=1;
                }
                else{
                    chars[j]=chars[i-1];
                    j++;
                }
                res++;
            }
           
        }
        return res;
    }
};