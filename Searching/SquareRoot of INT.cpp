int squareRoot(int a)
{
    // Write your code here.
    if (a == 0 || a == 1)
    {
        return a;
    }
    int start = 0;
    int end = a;
    int ans = -1;
    while (start <= end)
    {
        long long int mid = (start + end) / 2;
        if (mid * mid == a)
        {
            ans = mid;
            break;
        }
        else if (mid * mid > a)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}