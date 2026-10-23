class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        pair<int,int>p;
        s.insert(p);
        for(char c:path){
            if(c=='N')p.first++;
            if(c=='S')p.first--;
            if(c=='E')p.second++;
            if(c=='W')p.second--;
            if(s.count(p))return true;
            s.insert(p);
        }
        return false;
        
    }
};