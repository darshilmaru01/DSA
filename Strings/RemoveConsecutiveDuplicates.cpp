#include <iostream>
using namespace std;

string removeDuplicate(string &s)
{
    string ans = "";
    int i = 0, j = 1;

    while (i < s.size())
    {
        if (s[i] == s[j])
            j++;
        else
        {
            ans.push_back(s[i]);
            i = j;
            j++;
        }
    }
    return ans;
}

int main()
{
    string s = "abbbcdddeeef";
    cout << removeDuplicate(s);
}