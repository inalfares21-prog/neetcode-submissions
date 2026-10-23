class Solution {
public:
    int numUniqueEmails(vector<string>& e) {
        set<string>s;

        for(string k:e){
             bool local=true;
             bool p=false;
            string tmp;
            for(char c:k){
                if(c=='@'){local=false;}
                if(local&&p){continue;}
                if(local&&c=='.'){continue;}
                if(local&&c=='+'){
                    p=true;
                    continue;
                }
                if(local&&p)continue;
                tmp.push_back(c);
                
            }
            cout<<tmp<<endl;
            s.insert(tmp);
        }
        return s.size();
        
    }
};