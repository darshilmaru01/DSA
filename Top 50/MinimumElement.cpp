#include <iostream>
using namespace std;

int main()
{

    int mini;
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    cout << mini;
}