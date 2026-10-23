class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>res(26);
        for(string s:words){
            for(char c:s){
                res[c-'a']++;
            }
        }
        for(int i:res){
            if(i%words.size()!=0)return false;
        }
        return  true;
        
    }
};