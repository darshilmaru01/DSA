#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

string solve(string str1, string str2)
{
    unordered_map<char, int> mp;
    string ans = "";

    for (int i = 0; i < str2.length(); i++)
    {
        mp[str2[i]] = 1;
    }

    for (int i = 0; i < str1.length(); i++)
    {
        if (!mp[str1[i]])
        {
            ans.push_back(str1[i]);
        }
    }
    return ans;
}

int main()
{

    string str1 = "abcde";
    string str2 = "akjckd";

    cout << solve(str1, str2);
}