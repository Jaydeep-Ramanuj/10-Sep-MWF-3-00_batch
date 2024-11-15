#include <iostream>

using namespace std;

// When we want to inherit one class into another class then it is called single inheritance

class remote
{
    string circuitType;
    string technology;

public:
    string modelNumber;
    int numberOfCells;
    int price;

    remote()
    {
        circuitType = "--";
        technology = "--";
        modelNumber = "--";
        numberOfCells = 0;
        price = 0;
    }

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

class TVRemote : public remote
{

    bool hasMic;

public:
    string brandName;

    TVRemote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology, string _brandName, bool _hasMic) : remote(_numberOfCells, _price, _modelNumber, _circuitType, _technology)
    {
        brandName = _brandName;
        hasMic = _hasMic;
    }

    bool hasMicrophone()
    {
        return hasMic;
    }
};

int main()
{
    TVRemote sony(2, 300, "sony123", "crt45", "SuperCool", "Bravia", true);
    cout << sony.brandName << endl;
    cout << sony.price << endl;
    cout << sony.hasMicrophone();

    return 0;
}