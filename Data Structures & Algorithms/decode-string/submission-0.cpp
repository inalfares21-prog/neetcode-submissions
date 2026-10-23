class Solution {
public:
string sol(string& s,int& i){
    string res;
    while(i<s.size()){
        string tmp;
        while(i<s.size()&&isdigit(s[i])){
            tmp.push_back(s[i]);
            i++;
        }
        if(s[i]=='['){
            cout<<tmp<<endl;
            int rep=stoi(tmp);
            i++;
            string t=sol(s,i);
            for(int i=0;i<rep;i++){
                res+=t;
            }
            continue;
        }
        if(s[i]==']'){
            i++;
            return res;
        }
        res.push_back(s[i]);
        i++;
    }
    return res;
}
    string decodeString(string s) {
        int i=0;
        return sol(s,i);
       
        
    }
};