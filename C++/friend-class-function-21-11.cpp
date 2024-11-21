#include <iostream>

using namespace std;

class A
{

    string name = "Class A";
    friend class B;

    friend string getClassName();
};

string getClassName()
{
    A aa;
    return aa.name;
}

class B
{
    A a;

public:
    string getAClassName()
    {
        return a.name;
    }
};

int main()
{

    B b;
    cout << b.getAClassName() << endl;
    cout << getClassName();
    return 0;
}