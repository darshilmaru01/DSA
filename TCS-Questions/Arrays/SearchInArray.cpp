#include <iostream>
using namespace std;

// O(n) and O(1)
//  int main()
//  {
//      int n = 5;
//      int arr[n] = {1, 2, 3, 4, 5};
//      int k = 3;
//      for (int i = 0; i < n; i++)
//      {
//          if (arr[i] == k)
//          {
//              cout << "found at index: " << i << endl;
//          }
//      }
//  }

// O(Log N)
int main()
{
    int n = 6;
    int arr[n] = {6, 7, 9, 5, 3, 10};
    int k = 10;
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    cout << " the element is present at index: " << ans << endl;
}