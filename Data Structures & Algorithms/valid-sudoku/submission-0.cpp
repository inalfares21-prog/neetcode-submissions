class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>>col(9,vector<bool>(9,false));
        vector<vector<bool>>row(9,vector<bool>(9,false));
        for(int b=3;b<10;b=b+3){
            for(int a=3;a<10;a=a+3){
                vector<bool>square(9);
                for(int i=b-3;i<b;i++){
                    for(int j=a-3;j<a;j++){
                        if(board[i][j]-'0'<0)continue;
                       
                        if(square[board[i][j]-'0'-1]){cout<<i<<j;return false;}
                        if(col[i][board[i][j]-'0'-1]){cout<<i<<j;return false;}
                        if(row[j][board[i][j]-'0'-1]){cout<<i<<j;return false;}
                        square[board[i][j]-'0'-1]=true;
                        col[i][board[i][j]-'0'-1]=true;
                        row[j][board[i][j]-'0'-1]=true;
                    }
                }
            }
        }
        return true;
    }
};
