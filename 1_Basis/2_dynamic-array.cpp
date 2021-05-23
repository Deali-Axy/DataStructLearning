#include <iostream>

using namespace std;

int main()
{
    int n = 20;
    // 定义数组指针
    int *p;
    // 动态分配数组空间
    p = (int *)malloc(n * sizeof(int));

    *p = 1;
    cout << p << endl;
    cout << *p << endl;

    *(p + 1) = 2;
    cout << p + 1 << endl;
    cout << *(p + 1) << endl;

    return 0;
}