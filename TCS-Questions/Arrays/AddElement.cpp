#include <bits/stdc++.h>
using namespace std;

// //begin
// void insertAtBegin(int *arr, int n, int value)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[0] = value;
// }

// end
void insertAtEnd(int *arr, int n, int value)
{
    arr[n] = value;
}

int main()
{
    int n = 8;
    int arr[9] = {10, 9, 14, 8, 20, 48, 16, 9};
    int value = 40;

    cout << "Before Insertion: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    //    insertAtBegin(arr, n, value);
    insertAtEnd(arr, n, value);
    cout << "\nAfter Insertion: " << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}