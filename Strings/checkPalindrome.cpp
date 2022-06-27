bool checkPalindrome(string s)
{

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    int start = 0, end = s.size() - 1;

    while (start < end)
    {

        if (!(s[start] >= 'a' && s[start] <= 'z') && !(s[start] >= '0' && s[start] <= '9'))
        {
            start++;
        }

        else if (!(s[end] >= 'a' && s[end] <= 'z') && !(s[end] >= '0' && s[end] <= '9'))
            end--;

        else if (s[start] != s[end])
            return false;

        else
        {
            start++;
            end--;
        }
    }
    return true;
}