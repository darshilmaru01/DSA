#include <iostream>
#include <string.h>
using namespace std;

main()
{
    char string[20];
    int i, length, flag = 0;
    cout << "Enter String: " << endl;
    cin >> string;

    length = strlen(string);

    for (i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "Not palindrome";
    }
    else
        cout << "Palindrome";
}