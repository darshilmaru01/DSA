/*

Problem Statement:

Given an array arr of size N containing positive and negative integers.
Arrange the array alternatively such that every non-negative integer is followed by a negative integer and vice-versa.

*/

void rearrange(vector<int> &v)
{
    int n = v.size(), i = 0, c = 0;
    while (i < n)
    {
        if (v[i] < 0 && c % 2 == 0)
        {
            int temp = v[i];
            v[i] = v[c];
            v[c] = temp;
            c++;
        }
        else if (v[i] >= 0 && c % 2 == 1)
        {
            int temp = v[i];
            v[i] = v[c];
            v[c] = temp;
            c++;
        }
        else
            i++;
    }
}