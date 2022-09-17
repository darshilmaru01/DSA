#include <iostream>
using namespace std;

int main()
{

    int t1 = 0, t2 = 1;
    int nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Negative Number Inserted!" << endl;
        return 0;
    }
    cout << "Fibonacci Series is: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}