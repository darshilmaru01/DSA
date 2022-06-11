/*

Problem Statement

Ninja has been provided a matrix 'MAT' of size 'N X M' where 'M' is the number of columns in the matrix,
and 'N' is the number of rows.

The weight of the particular row is the sum of all elements in it. Ninja wants to find the maximum weight amongst all the rows.
Your task is to help the ninja find the maximum weight amongst all the rows.

*/

int maximumWeightRow(int n, int m, vector<vector<int>> &mat)
{
    int maxWeight = 0;
    for (int i = 0; i < n; i++)
    {
        int currRowWeight = 0;
        for (int j = 0; j < m; j++)
        {
            currRowWeight += mat[i][j];
        }
        if (currRowWeight > maxWeight)
            maxWeight = currRowWeight;
    }
    return maxWeight;
}