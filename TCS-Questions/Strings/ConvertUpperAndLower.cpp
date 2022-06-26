// Read a string and convert all the uppercases to $ sign and
// all lower cases to & sign and print the output.

#include <iostream>
using namespace std;

int main()
{

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = '$';
        }
        else
        {
            str[i] = '&';
        }
    }
    cout << str << endl;
}