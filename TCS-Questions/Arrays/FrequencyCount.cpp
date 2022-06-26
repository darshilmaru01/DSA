#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void countFreq(int arr[], int n) // Time Complexity: O(N*N) -- Space Complexity:  O(N)
{
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

// Using map O(N) Time and O(N) Space
void frequency(int arr[], int n)
{

    unordered_map<int, int> umap;

    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    frequency(arr, n);
    // countFreq(arr, n);

    return 0;
}