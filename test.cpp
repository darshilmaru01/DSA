#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()

{

    int t;

    cin >> t;

    while (t--)

    {

        string s;

        cin >> s;

        int costa, costb;

        cin >> costa >> costb;

        int n = s.size();

        int min_cost = 0;
        int f = 0;

        for (int i = 0; i < n / 2; i++)

        {

            if (s[i] == '/')

            {

                f = 1;

                if (s[n - i - 1] == '/')

                {

                    min_cost += 2 * (min(costa, costb));

                    if (min(costa, costb) == costa)

                        s[i] = s[n - i - 1] = 'a';

                    else

                        s[i] = s[n - i - 1] = 'a';
                }

                else

                {

                    if (s[n - i - 1] == 'a')

                    {

                        min_cost += costa;

                        s[i] = 'a';
                    }

                    else

                    {

                        min_cost += costb;

                        s[i] = 'b';
                    }
                }
            }

            if (s[n - i - 1] == '/')

            {

                f = 1;

                if (s[i] == 'a')

                {

                    min_cost += costa;

                    s[n - i - 1] = 'a';
                }

                else

                {

                    min_cost += costb;

                    s[n - i - 1] = 'b';
                }
            }
        }

        string temp = s;

        reverse(s.begin(), s.end());

        if (f == 0 || s != temp)

            cout << "-1\n";

        else

            cout << min_cost << "\n";
    }
}