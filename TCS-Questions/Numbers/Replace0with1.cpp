#include <iostream>
using namespace std;

int replace(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = 0;
    int temp = 1;

    while (n > 0)
    {
        int d = n % 10;
        if (d == 0)
        {
            d = 1;
        }
        ans = d * temp + ans;
        n = n / 10;
        temp = temp * 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << replace(n);
    return 0;
}