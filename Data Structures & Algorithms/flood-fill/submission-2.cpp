class Solution {
public:
void sol(vector<vector<int>>& image, int sr, int sc, int color){
    int c=image[sr][sc];
    image[sr][sc]=-1;
    if(sr>0&&image[sr-1][sc]==c){
        sol(image,sr-1,sc,color);
    }
    if(sc>0&&image[sr][sc-1]==c){
        sol(image,sr,sc-1,color);
    }
     if(sc<image[0].size()-1&&image[sr][sc+1]==c){
        sol(image,sr,sc+1,color);
    }
     if(sr<image.size()-1&&image[sr+1][sc]==c){
        sol(image,sr+1,sc,color);
    }
    image[sr][sc]=color;
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        sol(image,sr,sc,color);
        return image;
        
    }
};