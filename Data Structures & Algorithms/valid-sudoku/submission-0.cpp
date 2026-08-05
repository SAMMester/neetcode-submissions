class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; ++r) {
            unordered_set<char> seen;
            for (int c = 0; c < 9; ++c) {
                char val = board[r][c];
                if (val == '.') continue;
                if (seen.contains(val)) return false;
                seen.insert(val);
            }
        }

        // 2. Check Columns
        for (int c = 0; c < 9; ++c) {
            unordered_set<char> seen;
            for (int r = 0; r < 9; ++r) {
                char val = board[r][c];
                if (val == '.') continue;
                if (seen.contains(val)) return false;
                seen.insert(val);
            }
        }

        // 3. Check 3x3 Sub-boxes
        for (int boxRow = 0; boxRow < 3; ++boxRow) {
            for (int boxCol = 0; boxCol < 3; ++boxCol) {
                unordered_set<char> seen;
                for (int r = 0; r < 3; ++r) {
                    for (int c = 0; c < 3; ++c) {
                        char val = board[boxRow * 3 + r][boxCol * 3 + c];
                        if (val == '.') continue;
                        if (seen.contains(val)) return false;
                        seen.insert(val);
                    }
                }
            }
        }

        return true;
    
    }
};
