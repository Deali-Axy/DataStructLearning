#include <iostream>

using namespace std;

void f(int x)
{
    ++x;
}

void f2(int &x)
{
    ++x;
}

int main()
{
    int a = 0;
    f(a);
    cout << a << endl;

    f2(a);
    cout << a << endl;

    return 0;
}