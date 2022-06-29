#include <iostream>
using namespace std;

isPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while (temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    if (n == reverse)
        return true;
    return false;
}

int main()
{
    int min;
    cin >> min;

    int max;
    cin >> max;

    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}