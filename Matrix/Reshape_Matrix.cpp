vector<vector<int>> arrange(int n, int m, vector<vector<int>> &b, int r, int c)
{
    vector<vector<int>> vec(r, vector<int>(c));
    if (m * n != r * c)
        return b;

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x < r && y < c)
            {
                vec[x][y] = b[i][j];
                y++;
            }
            else
            {
                x++;
                y = 0;
                vec[x][y] = b[i][j];
                y++;
            }
        }
    }
    return vec;
}
