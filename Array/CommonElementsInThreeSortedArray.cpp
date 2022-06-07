#include <climits>
vector<int> findCommonElements(vector<int> &ar1, vector<int> &ar2, vector<int> &ar3)
{
    int i = 0, j = 0, k = 0;
    int n1 = ar1.size();
    int n2 = ar2.size();
    int n3 = ar3.size();
    vector<int> ans;

    while (i < n1 && j < n2 && k < n3)
    {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            ans.push_back(ar1[i]);
            int ele = ar1[i];

            while (i < n1 && ar1[i] == ele)
                i++;
            while (j < n2 && ar2[j] == ele)
                j++;
            while (k < n3 && ar3[k] == ele)
                k++;
        }
        else if (ar1[i] < ar2[j])
            i++;
        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }
    return ans;
}