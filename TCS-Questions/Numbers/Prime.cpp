#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int ans = isPrime(n);

    if (n != 1 && ans == true)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is NOT prime";
    }
}