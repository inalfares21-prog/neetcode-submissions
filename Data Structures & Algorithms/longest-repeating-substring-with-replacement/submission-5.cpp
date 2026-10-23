class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int h=0;
        for(int i=0;i<k;i++){
            mp[s[i]]++;
            h=max(h,mp[s[i]]);
        }
        int curr=0;
        for(int i=k;i<s.size();i++){
            mp[s[i]]++;
            h=max(h,mp[s[i]]);
            if(curr<h){
                curr++;
            }
            else{
                mp[s[i-k-curr]]--;
            }
        }
        int n=s.size();
        return min(n,h+k);
        
    }
};
