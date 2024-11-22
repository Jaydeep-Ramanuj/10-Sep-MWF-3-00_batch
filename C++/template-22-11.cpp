#include <iostream>

using namespace std;

// int sum(int n1, int n2, int n3)
// {
//     return n1 + n2;
// }
// float sum(float n1, float n2)
// {
//     return n1 + n2;
// }

// string sum(string s1, string s2)
// {
//     return s1 + s2;
// }

template <typename T>

T sum(T s1, T s2)
{
    return s1 + s2;
}

template <typename O>
class person
{
public:
    O age;
    O salary;
    person(O _age, O _salary)
    {
        age = _age;
        salary = _salary;
    }

    O getAge()
    {
        return age;
    }
    O getSalary()
    {
        return salary;
    }
};

int main()
{
    cout << sum(10.20, 20.20) << endl;
    cout << sum(10, 20) << endl;

    string s1 = "Hi";
    string s2 = "Hello";

    cout << sum(s1, s2) << endl;

    string age = "11";
    string salary = "1100";

    person<int> i(10, 1000);
    person<float> f(5.5, 2000.20);
    person<string> s(age, salary);

    cout << i.getAge() << endl;
    cout << i.getSalary() << endl;
    cout << f.getAge() << endl;
    cout << f.getSalary() << endl;
    cout << s.getAge() << endl;
    cout << s.getSalary() << endl;
    return 0;
}