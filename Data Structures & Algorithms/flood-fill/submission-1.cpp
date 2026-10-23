class Solution {
    void sol(vector<vector<int>>& image, int sr, int sc, int color,int val){
        if(image[sr][sc]==val){
            
            int v= image[sr][sc];
            image[sr][sc]=-1;
            if(sr>0&& image[sr-1][sc]!=-1){
                sol(image,sr-1,sc,color,v);
            }
            if(sc>0&& image[sr][sc-1]!=-1){
                sol(image,sr,sc-1,color,v);
            }
            if(sr<image.size()-1&& image[sr+1][sc]!=-1){
                sol(image,sr+1,sc,color,v);
            }
            if(sc<image[0].size()-1&& image[sr][sc+1]!=-1){
                sol(image,sr,sc+1,color,v);
            }
            image[sr][sc]=color;
        }


    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        sol(image,sr,sc,color,image[sr][sc]);
        return image;
        
    }
};