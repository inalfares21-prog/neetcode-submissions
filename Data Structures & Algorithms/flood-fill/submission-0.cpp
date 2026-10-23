class Solution {
    private:
    void sol(vector<vector<int>>& image, int sr, int sc, int color){
        int t=image[sr][sc];
        image[sr][sc]=-1;
        if(sr>0&&image[sr-1][sc]==t){
             sol(image,sr-1,sc,color);
        }
        if(sc>0&&image[sr][sc-1]==t){
            sol(image,sr,sc-1,color);
        }
         if(sc<image[0].size()-1&&image[sr][sc+1]==t){
            sol(image,sr,sc+1,color);
        }
         if(sr<image.size()-1&&image[sr+1][sc]==t){
            sol(image,sr+1,sc,color);
        }
       

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        sol(image,sr,sc,color);
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                if(image[i][j]==-1){
                    image[i][j]=color;
                }
        }
        }
        return image;
        
    }
};