class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>k;
        for(string s:emails){
            bool local=true;
            bool p=false;
            string rmp;
            for(char c:s){
                if(c=='@')local=false;
                if(local&&c=='.')continue;
                if(c=='+'){
                    p=true;
                }
                if(local&&p)continue;
                rmp.push_back(c);
            }
            k.insert(rmp);
        }
        return k.size();
        
    }
};