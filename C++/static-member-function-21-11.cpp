#include <iostream>

using namespace std;

class Student
{
    int roll;
    string name;
    string course;

public:
    // static member, while all data are store in object but sometimes we need data that are shared across objects at that time we can use static data member

    static int latestRollNumber;

    Student(string _name, string _course)
    {
        roll = getLatestRollNumber();
        name = _name;
        course = _course;
    }

    int getRollNumber()
    {
        return roll;
    }

    // static function, to share a common function between objects we can use static function, but remember we can only access static members inside static function

    static int getLatestRollNumber()
    {
        latestRollNumber++;
        return latestRollNumber;
    }
};

int Student::latestRollNumber = 0;

int main()
{

    Student s1("Jay", "Wd");
    cout << s1.getRollNumber() << endl;
    Student s2("Ajay", "Wd");
    cout << s2.getRollNumber() << endl;
    Student s3("Sanay", "Wd");
    cout << s3.getRollNumber() << endl;

    return 0;
}