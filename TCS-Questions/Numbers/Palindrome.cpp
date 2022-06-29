#include <iostream>
using namespace std;

int palindromeHelper(int n)
{
    int y = 0;
    while (n > 0)
    {
        int dig = n % 10;
        y = y * 10 + dig;
        n = n / 10;
    }
    return y;
}

int main()
{
    int n;
    cin >> n;

    int dummy = n;
    int y = palindromeHelper(n);

    if (dummy == y)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}