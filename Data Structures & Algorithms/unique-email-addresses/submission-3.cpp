class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>k;
        for(string s:emails){
            bool l=true;
            bool p=false;
            string tmp;
            for(char c:s){
                if(c=='@'){
                    l=false;
                }
                if(l&&c=='.')continue;
                if(l&&p)continue;
                if(c=='+'){
                    p=true;
                }
                tmp.push_back(c);
            }
            cout<<s<<endl;
            k.insert(tmp);
        }
        return k.size();
        
    }
};