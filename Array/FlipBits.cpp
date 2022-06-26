#include <iostream>
using namespace std;

int flipBits(int *arr, int n)
{

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            arr[i] = -1;
        }
        else
        {
            arr[i] = 1;
        }
    }
    int currentsum = 0;
    int maximumsum = 0;

    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum >= maximumsum)
        {
            maximumsum = currentsum;
        }

        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return count + maximumsum;
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

    cout << flipBits(arr, n) << endl;
}