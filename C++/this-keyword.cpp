#include <iostream>

using namespace std;

class A
{
public:
    int num;

    A(int num)
    {
        this->num = num;
    }
};

int main()
{
    A a(10);

    cout << a.num;
    return 0;
}