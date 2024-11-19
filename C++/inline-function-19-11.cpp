#include <iostream>

using namespace std;

int sum(int, int);

inline int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    cout << sum(10, 20);
    cout << 10 + 20;

    sum(20, 30);
    return 0;
}