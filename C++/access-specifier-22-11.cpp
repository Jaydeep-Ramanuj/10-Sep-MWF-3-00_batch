#include <iostream>

using namespace std;

class Base
{
    // to limit access to class member only
private:
    string secret = "This is some secret";
    int api_key = 132456;

    // to allow access from within class and derived classes
protected:
    string apiPoint = "www.somewhere.com/api/v2/user/profile";

    // to access data from anywhere
public:
    string url = "www.somewhere.com";
};

class Derived : Base
{
public:
    string getApiPoint()
    {
        return apiPoint;
    }

    string getSecret()
    {
        // return secret;
    }
};

int main()
{
    Base b;
    Derived d;

    cout << b.url << endl;
    cout << d.getApiPoint() << endl;

    return 0;
}