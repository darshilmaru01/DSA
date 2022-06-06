/*

Ninja has ‘N’ beautiful paintings labeled from 1 to N.He has to go to an exhibition to showcase ‘K’ paintings.
Now, he is confused about which combinations of paintings he should choose.
He wants to make all possible combinations of these ‘N’ paintings.
Can you help Ninja to make all the possible combinations of N paintings?

You are given two integers N and K. Your task is to print return all possible combinations of ‘K’ paintings.

*/

void help(int i, int n, int k, vector<int> &subSet, vector<vector<int>> &ans)
{

    // base
    if (k == 0)
    {
        ans.push_back(subSet);
        return;
    }
    if (k > n - i + 1)
        return;
    if (i > n)
        return;

    // take the ith element
    subSet.push_back(i);
    help(i + 1, n, k - 1, subSet, ans);

    // skip the ith element
    subSet.pop_back();
    help(i + 1, n, k, subSet, ans);
}

vector<vector<int>> combinations(int n, int k)
{
    vector<int> subSet;
    vector<vector<int>> ans;
    help(1, n, k, subSet, ans);
    return ans;
}