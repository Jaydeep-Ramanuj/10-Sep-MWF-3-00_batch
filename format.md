<h1>Heading 1</h1>
# Heading 1

<b>Bold</b>
**Bold**

1. one
2. two
3. three

- pizza
- pavbhaji
- pulao

https://www.markdownguide.org/cheat-sheet/

![](https://images.pexels.com/photos/170811/pexels-photo-170811.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1)

```c
    cout << "true && false: " << (true && false) << endl;
    cout << "true && true: " << (true && true) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "false || false: " << (false || false) << endl;
    cout << "!true: " << (!true) << endl;

```

### User class

```cpp
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
```

To make function virtual **_we write `virtual` before function_** name

| C        | C++        |
| -------- | ---------- |
| C is ... | C++ is ... |
