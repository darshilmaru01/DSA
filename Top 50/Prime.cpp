#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Prime";
    }

    return 0;
}