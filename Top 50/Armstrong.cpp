// Armmstrong Number

#include <iostream>
using namespace std;

int main()
{

    int n, r, temp;
    cin >> n;
    int sum = 0;
    temp = n;

    /*
        n=153
        -> 1^3 + 5^3 + 3^3
    */

    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    return 0;
}