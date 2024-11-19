#include <iostream>

using namespace std;

class User
{

public:
    string name;
    int age;
    string city;
    string course;
    string linkedInId;
    string email;
    double phone;

    User()
    {
        name = "null";
        age = NULL;
        city = "null";
        course = "null";
        linkedInId = "null";
        email = "null";
        phone = NULL;
    }
    User(string _name, int _age, string _city, string _course, string _linkedInId, string _email, double _phone)
    {
        name = _name;
        age = _age;
        city = _city;
        course = _course;
        linkedInId = _linkedInId;
        email = _email;
        phone = _phone;
    }
    User(string _name, int _age, string _city, string _course)
    {
        name = _name;
        age = _age;
        city = _city;
        course = _course;
        email = "default_email";
    }

    int sum(int n1)
    {
        return n1 + 10;
    }
    int sum(int n1, int n2)
    {
        return n1 + n2;
    }
    int sum(int n1, int n2, int n3)
    {
        return n1 + n2 + n3;
    }
    int sum(int n1, int n2, int n3, int n4)
    {
        return n1 + n2 + n3 + n4;
    }
};

int main()
{

    User kishan;
    cout << kishan.name << endl;

    User dhvani("Dhvani", 20, "Rajkot", "Python", "dhvani13", "Dhvani@gmail.com", 54321);
    cout << dhvani.name << endl;

    User khushbu("Khushbu", 20, "Surat", "Python");
    cout << khushbu.name << endl;
    cout << khushbu.email << endl;
    cout << khushbu.phone << endl;

    cout << khushbu.sum(10) << endl;
    cout << khushbu.sum(10, 20) << endl;
    cout << khushbu.sum(10, 20, 30) << endl;
    cout << khushbu.sum(10, 20, 30, 40) << endl;

    // Summation

    cout << 10 + 20 << endl;

    // Concatenation
    string n1 = "10";
    string n2 = "20";

    cout << n1 + n2;

    return 0;
}