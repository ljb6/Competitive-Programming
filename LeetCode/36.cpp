class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // funciona mas ficou chinelo

        unordered_map<char, int> check;
        for (int i = 0; i < 9; i++) {

            // horizontal check
            for (int h = 0; h < 9; h++) {
                if (board[i][h] != '.') {
                    check[board[i][h]]++;
                    if (check[board[i][h]] > 1)
                        return false;
                }
            }

            check.clear();

            // vertical check
            for (int v = 0; v < 9; v++) {
                if (board[v][i] != '.') {
                    check[board[v][i]]++;
                    if (check[board[v][i]] > 1)
                        return false;
                }
            }

            check.clear();
        }

        // squares check
        for (int col = 0; col < 3; col++) {
            for (int row = 0; row < 3; row++) {
                for (int c = row * 3; c < (row + 1) * 3; c++) {
                    for (int e = col * 3; e < (col + 1) * 3; e++) {
                        if (board[c][e] != '.') {
                            check[board[c][e]]++;
                            if (check[board[c][e]] > 1)
                                return false;
                        }
                    }
                }
                check.clear();
            }
        }

        return true;
    }
};