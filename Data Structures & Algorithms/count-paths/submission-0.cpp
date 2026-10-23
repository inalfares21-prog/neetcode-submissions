class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>hor(n,1);
        vector<int>ver(m,1);
        while(hor.size()>1&&ver.size()>1){
            vector<int>chor(hor.size()-1);
            vector<int>cver(ver.size()-1);
            chor[0]=ver[1]+hor[1];
            cver[0]=ver[1]+hor[1];
            for(int i=1;i<chor.size();i++){
                chor[i]=chor[i-1]+hor[i+1];
            }
             for(int i=1;i<cver.size();i++){
                cver[i]=cver[i-1]+ver[i+1];
            }
            hor=move(chor);
            ver=move(cver);
        }
        return hor.size()==1? ver[ver.size()-1]:hor[hor.size()-1];
        
        
        
        
    }
};
