#include <iostream>

using namespace std;

// class is collection of data members and member functions which is useful to make objects.
// class is blueprint to make objects

// class class_name
// {

//     // data members
//     // stirng name = "Something"

//     // default constructor, default is special type of function that is used to initalized data members with default value, it is called automatically by compiler if we haven't use any parameterized constructor, if we haven't made one it will create one itself and call it, remember that it doesn't have any return type
//     class_name()
//     {
//         // initialise data members
//     }
//     // parameterized constructor, it is used to nitialize data members with custom values, we have to pass those value while create any objects

//     class_name(parameter_1_type parameter_1_value, parameter_2_type parameter_2_value, ..)
//     {
//         // inialize values based on provided parameters
//     }

//     // destructor, it is used to destroy release from memory, use it to remove unused references

//     ~class_name()
//     {
//         // write code to release unused recourses
//     }

//     // method, these are functions which will work on current object, they can access data members of current objects

//     return_type method_name()
//     {
//         // code that can use or manipulate data members
//     }

//     // getter methods, such methods are used to get private data members, they usually contain code which perform some kinds of check to permit that access

//     return_type get_data_member_name()
//     {
//         // return data_member
//     }

//     // setter methods, such methods are used to set /  manipulate private data member values, they usually contain code which perform some kinds of check to permit that access

//     return_type get_data_member_name()
//     {
//         // write code to set or manipulate data memebers
//     }
// };

class person
{
    string name;
    int age;

public:
    string city;

    // Default constructor
    person()
    {
        name = "Jay";
        age = 23;
        city = "Rajkot";
    }

    ~person()
    {
        // fclose(file)
    }

    person(string _name, int _age, string _city)
    {
        name = _name;
        age = _age;
        city = _city;
    }

    void greet()
    {
        cout << "Hello, " << name << endl;
    }

    string getName()
    {
        if (name == "Sumit")
        {
            return name;
        }
        else
        {
            return "Oops access denied !";
        }
    }
    int getAge()
    {
        return age;
    }
    string setAge(int _age)
    {
        age = _age;
    }
};
int main()
{

    person p1, p2, p3;
    person p4("Sumit", 24, "Surat");
    person p5("Jay", 26, "Amreli");

    // p1.name = "Jay";
    // p2.name = "Ajay";
    // p3.name = "Sanjay";

    // cout << p1.name;
    // cout << p2.name;
    // cout << p3.name;

    // cout << p1.city;
    // cout << p2.city;
    // cout << p4.city;
    // cout << "\n";
    // cout << p4.getName();
    // p4.setAge(34);
    // cout << p4.getAge();
    cout << p5.getName();

    // p1.greet();
}