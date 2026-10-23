class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>m;
        int n=0;
        int l=0;
        int r=s.size()+1;
        for(char c:t){
            if(!m.count(c)){
                n++;
            }
            m[c]++;
        }
        int j=0;
        
        for(int i=0;i<s.size();i++){
            
            if(m.count(s[i])){
                m[s[i]]--;
                if(m[s[i]]==0){
                    n--;
                }
            }
            while(n==0){
                if(m.count(s[j])){
                    m[s[j]]++;
                    if(m[s[j]]>0){
                        n++;
                        if(r-l>i-j){
                            r=i;
                            l=j;
                        }
                    }
                }
                j++;
            }

        }
         while(n==0){
                if(m.count(s[j])){
                    m[s[j]]++;
                    if(m[s[j]]>0){
                        n++;
                        if(r-l>s.size()-j){
                            r=s.size()-1;
                            l=j;
                        }
                    }
                }
                j++;
            }
            string res;
       
        if(r==s.size()+1)return res;
        for(int i=l;i<r+1;i++){
            res.push_back(s[i]);
        }
        return res;
    }
};
