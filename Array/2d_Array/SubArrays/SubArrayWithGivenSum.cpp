vector<int> subarraySum(vector<int> &arr, long long sum)
{

    int start = 0, i;
    int currSum = 0;

    //     vector<int>ans(2,-1);

    for (i = 1; i < arr.size(); i++)
    {

        while (currSum > sum && start < i - 1)
        {

            currSum -= arr[start];

            start++;
        }

        if (currSum == sum)
        {

            //             ans.push_back(start);

            //             ans.push_back(i-1);

            return {start, i - 1};
        }

        if (i < arr.size())
        {

            currSum += arr[i];
        }
    }

    return {-1, -1};
}