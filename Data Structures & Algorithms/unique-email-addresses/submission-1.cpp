class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>k;
        int res=0;
        for(string s:emails){
            bool local =true;
            bool p=false;
            string tmp;
            for(char c:s){
                if(c=='.'&&local)continue;
                if(c=='@')local=false;
                if(c=='+'){p=true;continue;}
                if(p&&local)continue;
                tmp.push_back(c);
            }
            cout<<tmp<<endl;

            if(!k.count(tmp))res++;
            k.insert(tmp);
        }
        return res;
        
    }
};