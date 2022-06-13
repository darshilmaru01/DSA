#include <iostream>
#include <vector>
using namespace std;

function<int(int)> f;
f = [&f](int n) -> int
{ return (n <= 1) ? 1 : n * f(n - 1); };
int g = f(4);