#include <iostream>

using namespace std;

struct item
{
    string name;
    int price;
    string owner;
};

void printItemDetails(item i)
{
    cout << i.name << endl;
    cout << i.owner << endl;
    cout << i.price << endl;
}

int main()
{

    struct item i1;
    i1.name = "Bottle";
    i1.owner = "Jay";
    i1.price = 100;

    printItemDetails(i1);

    return 0;
}