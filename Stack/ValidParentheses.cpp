class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, int> m = {{'(', 1}, {'{', 2}, {'[', 3}, {')', -1}, {'}', -2}, {']', -3}};
        stack<char> st;
        for (char x : s)
        {
            if (m[x] > 0)
            {
                st.push(x);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char t = st.top();
                st.pop();
                if (m[t] + m[x] != 0)
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};