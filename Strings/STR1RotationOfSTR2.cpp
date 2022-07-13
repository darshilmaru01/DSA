// Check If One String Is A Rotation Of Another String

int isCyclicRotation(string &p, string &q)
{
    int n = p.size();
    char current;
    char current_1;

    for (int i = 0; i < n - 1; i++)
    {
        current = p[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            p[j] = p[j - 1];
        }
        p[0] = current;
        if (p == q)
            return 1;
        else
            continue;
    }
    return 0;
}

// O(N)

int isCyclicRotation(string &p, string &q)
{
    if (p == q)
        return 1;

    if (p.length() != q.length())
        return 0;

    string temp = p + p;

    int pos = temp.find(q);

    if (pos >= 0)
        return 1;
    return 0;
}