class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        int a=0;
        int b=0;
        s.insert({0,0});
        for(char c:path){
            if(c=='N'){
                a++;
            }
            if(c=='S'){
                a--;
            }
            if(c=='E')b++;
            if(c=='W')b--;
            if(s.count({a,b}))return true;
            s.insert({a,b});
        }
        return false;
        
    }
};