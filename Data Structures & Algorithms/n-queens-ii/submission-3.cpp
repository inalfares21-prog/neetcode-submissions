class Solution {
public:
    bool isValid(const vector<vector<bool>>& board, int row, int col, int n) {
        // Check column above
        for (int i = 0; i < row; ++i) {
            if (board[i][col]) return false;
        }
        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j) {
            if (board[i][j]) return false;
        }
        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j) {
            if (board[i][j]) return false;
        }
        return true;
    }

    void backtrack(vector<vector<bool>>& board, int row, int n, int& count) {
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; ++col) {
            if (isValid(board, row, col, n)) {
                board[row][col] = true;
                backtrack(board, row + 1, n, count);
                board[row][col] = false; // Backtrack
            }
        }
    }

    int totalNQueens(int n) {
        int count = 0;
        vector<vector<bool>> board(n, vector<bool>(n, false));
        backtrack(board, 0, n, count);
        return count;
    }
};