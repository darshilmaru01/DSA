#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    s.pop();
    s.pop();

    if (s.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }
}