#include <iostream>

using namespace std;

// Inheritance, it is OOP concept which is used when we have already defined / implemented many  properties and methods in some class and now we want to just use it directly and want to add some extra features, at that time we can simply inherit base class (which has all implementation) and add our stuff into int

// syntax

// class derived_class_name : mode base_class_name{

// }

class remote
{
    string circuitType;
    string technology;

public:
    string modelNumber;
    int numberOfCells;
    int price;

    remote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology)
    {
        numberOfCells = _numberOfCells;
        price = _price;
        modelNumber = _modelNumber;
        circuitType = _circuitType;
        technology = _technology;
    }

    string getTechnology()
    {
        return technology;
    }

    string getCircuitType()
    {
        return circuitType;
    }
};

int main()
{
    remote tvRemote(2, 200, "Remote123", "Crt1", "Techno");
    cout << tvRemote.getCircuitType() << endl;

    cout << tvRemote.price;

    return 0;
}