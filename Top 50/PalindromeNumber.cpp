#include <iostream>
using namespace std;

int main()
{

    int n, num;
    int rev = 0;
    int digit = 0;

    cin >> n;

    num = n;

    while (n != 0)
    {
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    if (num == rev)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}