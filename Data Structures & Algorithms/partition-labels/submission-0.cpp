class Solution {
public:
    vector<int> partitionLabels(string s) {
        int j=0;
        vector<int>res;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        for(int i=1;i<s.size();i++){
            if(i>mp[s[j]]){
                res.push_back(mp[s[j]]-j+1);
                j=i;
            }

            else{
                
                mp[s[j]]=max(mp[s[j]],mp[s[i]]);
                cout<<mp[s[j]]<<endl;
            }


        }
        res.push_back(mp[s[j]]-j+1);
        return res;
        
    }
};
