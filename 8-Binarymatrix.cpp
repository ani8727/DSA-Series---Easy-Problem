// 1582. Special Positions in a Binary Matrix

#include <iostream>
#include <vector>
using namespace std;

// Approach 1: Brute Force
int numSpecial(vector<vector<int>>& mat) {
    int result = 0;
    int m = mat.size();
    int n = mat[0].size();

    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            if (mat[row][col] == 0) continue;

            bool special = true;
            // Check column
            for (int r = 0; r < m; r++) {
                if (r != row && mat[r][col] == 1) {
                    special = false;
                    break;
                }
            }
            // Check row
            for (int c = 0; c < n; c++) {
                if (c != col && mat[row][c] == 1) {
                    special = false;
                    break;
                }
            }
            if (special) result++;
        }
    }
    return result;
}

// Approach 2: Optimized using row and column sums
int numSpecialOptimized(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    vector<int> rowSum(m, 0), colSum(n, 0);

    // Calculate row and column sums
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }

    int result = 0;
    // Check for special positions
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] == 1 && rowSum[i] == 1 && colSum[j] == 1)
                result++;

    return result;
}

int main() {
    vector<vector<int>> mat = {
        {1,0,0},
        {0,0,1},
        {1,0,0}
    };
    cout << "Number of special positions (Brute Force): " << numSpecial(mat) << endl;
    cout << "Number of special positions (Optimized): " << numSpecialOptimized(mat) << endl;
    return 0;
}