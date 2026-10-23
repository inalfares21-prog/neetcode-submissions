class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>k;
        int res=0;
        for(string s:emails){
            bool p=false;
            bool l=true;
            string tmp;
            for(char c:s){
                if(c=='@'){
                    l=false;
                }
                if(l&&c=='.')continue;
                if(c=='+'&&l){
                    p=true;
                    continue;
                }
                if(p&&l){
                    continue;
                }
                tmp.push_back(c);
            }
            if(!k.count(tmp))res++;
            k.insert(tmp);
        }
        return res;
        
    }
};