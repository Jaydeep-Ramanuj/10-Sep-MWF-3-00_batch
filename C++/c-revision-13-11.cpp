#include <iostream>

using namespace std;

int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{

    int num = 10;
    float number = 10.10;
    bool isRunning = true;
    char initial = 'r';
    double d = 35121.352411;
    // char city[10]="Rajkot";
    string name = "Rahul";

    // Arithmatic

    cout << "10 + 20: " << 10 + 20 << endl;
    cout << "10 - 20: " << 10 - 20 << endl;
    cout << "10 * 20: " << 10 * 20 << endl;
    cout << "10 / 20: " << 10 / 20 << endl;
    cout << "10 % 20: " << 10 % 20 << endl;

    // Conditional

    cout << "10 < 20:" << (10 < 20) << endl;
    cout << "10 > 20:" << (10 > 20) << endl;
    cout << "10 <= 20:" << (10 <= 20) << endl;
    cout << "10 >= 20:" << (10 >= 20) << endl;
    cout << "10 == 20:" << (10 == 20) << endl;
    cout << "10 != 20:" << (10 != 20) << endl;

    // Logical

    cout << "true && false: " << (true && false) << endl;
    cout << "true && true: " << (true && true) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "false || false: " << (false || false) << endl;
    cout << "!true: " << (!true) << endl;

    // increment / decrement

    int n = 10;

    cout << "n++ : " << (n++) << endl;
    cout << "n-- : " << (n--) << endl;
    cout << "++n : " << (++n) << endl;
    cout << "--n : " << (--n) << endl;

    (10 < 20) ? cout << "10 is LT" : cout << ("10 is GT") << endl;

    string result;
    result = (10 > 20) ? "10 is LT" : "10 is GT";

    cout << result << endl;

    string day = "mon";

    if (day == "sun")
    {
        cout << "Holiday";
    }
    else if (day == "mon")
    {
        cout << "Monday";
    }
    else
    {
        cout << "Lecture";
    }
    cout << "\n";

    int a = 1000, b = 200, c = 30;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is MAX";
        }
        else
        {
            cout << "C is MAX";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is MAX";
        }
        else
        {
            cout << "C is MAX";
        }
    }
    int total = 0;

    // for (int i = 1; i <= 100; i++)
    // {
    //     total += i;
    // }
    // cout << total;

    int i = 1;

    // while (i <= 100)
    // {
    //     total += i;
    //     i++;
    // }

    // cout << total;

    do
    {
        total += i;
        i++;
    } while (i <= 100);

    cout << total << endl;

    int nums[5] = {10, 20, 30, 40, 50};

    cout << nums[2] << endl;
    nums[3] = 400;
    cout << nums[3] << endl;

    cout << sum(10, 20);

    return 0;
}
