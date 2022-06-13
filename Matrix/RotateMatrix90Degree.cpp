#include <bits/stdc++.h>
void inplaceRotate(vector<vector<int>> &inputArray)
{
    int n = inputArray.size();
    for (int i = 0; i < inputArray.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(inputArray[i][j], inputArray[j][i]);
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(inputArray[i][j], inputArray[n - i - 1][j]);
        }
    }
}