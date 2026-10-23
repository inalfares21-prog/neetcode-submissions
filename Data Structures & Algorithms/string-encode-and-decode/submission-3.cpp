class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s:strs){
            res+=to_string(s.size());
            res.push_back('-');
            res+=s;
        }
        return res;

    }

    vector<string> decode(string s) {
        cout<<s<<endl;
        
        
       
        vector<string>res;
        if(s.size()==0)return res;
        string tmp;
        int i=0;
        while(i<s.size()&&s[i]!='-'){
            tmp.push_back(s[i]);
            i++;
        }
        i++;
       
        int l=stoi(tmp);
        cout<<l;
        tmp="";
        while(i<s.size()){ 
            if(l==0){ 
                res.push_back(tmp);
                tmp="";
                while(i<s.size()&&s[i]!='-'){
                    tmp.push_back(s[i]);
                    i++;
                }
                cout<<tmp;
                if(tmp.size()!=0){l=stoi(tmp);}
                tmp="";
            }
            else{
                tmp.push_back(s[i]);
                l--;
            }
            i++;
        }
        res.push_back(tmp);
        return res;
        
        

    }
};
