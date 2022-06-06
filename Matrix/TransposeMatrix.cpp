/*

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 1000
1 <= m * n <= 10^5
-10^9 <= matrix[i][j] <= 10^9

*/

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &A)
    {
        // get the size of the matrix
        int row = A.size();
        int column = A[0].size();

        // create a new vector
        // initialize with row = column of A
        // column = row of A
        vector<vector<int>> transpose_matrix(column, vector<int>(row, 0));

        // for making the transpose, we need to flip the martrix values
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                transpose_matrix[j][i] = A[i][j];
            }
        }

        return transpose_matrix;
    }
};