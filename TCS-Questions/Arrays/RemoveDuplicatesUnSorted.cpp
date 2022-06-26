#include <bits/stdc++.h>
using namespace std;

class removeDuplicates
{
public:
    void Duplicates(int arr[], int n)
    {
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) == mp.end())
            {
                cout << arr[i] << " ";
                mp[arr[i]]++;
            }
        }
    }
};
int main()
{
    int arr[] = {1, 1, 2, 4, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates d1;
    d1.Duplicates(arr, n);

    return 0;
}