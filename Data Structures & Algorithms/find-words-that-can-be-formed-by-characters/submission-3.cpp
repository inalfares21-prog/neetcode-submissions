class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res=0;
        bool valid;
        unordered_map<char,int>mx;
        for(char x:chars){
            mx[x]++;
        }
        for(string& x:words){
            valid=true;
            unordered_map<char,int>mp=mx;
            for(char& y:x){
                if(!mp.count(y)||mp[y]<=0){
                    valid=false;
                    break;
                }
                else{
                    mp[y]--;
                }
            }
            if(valid){
                res+=x.size();
            }
        }
        return res;
        
    }
};