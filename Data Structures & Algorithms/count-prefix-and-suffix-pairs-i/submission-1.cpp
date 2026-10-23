class Solution {
    bool sol(string s1,string s2){
        if(s1.size()>s2.size())return false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])return false;
        }
        int j=s2.size()-1;
        for(int i=s1.size()-1;i>-1;i--){
            if(s1[i]!=s2[j])return false;
            j--;
        }
        return true;
    }
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int res=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(sol(words[i],words[j]))res++;
            }
        }
        return res;
        
    }
};