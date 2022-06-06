// Max and Min from array

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, a[i]);
        minNo = min(minNo, a[i]);
    }

    cout << "Max no: " << maxNo << "\n"
         << "Min no: " << minNo;

    return 0;
}