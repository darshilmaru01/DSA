// number is prime or not in C++?
#include <iostream>
using namespace std;

int main()
{
    int i;
    int Prime_Number;
    cin >> Prime_Number;
    bool prime = true;
    for (i = 2; i < Prime_Number; ++i)
    {
        if (Prime_Number % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
        cout << "You got a prime number!" << endl;
    else
        cout << "No luck" << endl;
}