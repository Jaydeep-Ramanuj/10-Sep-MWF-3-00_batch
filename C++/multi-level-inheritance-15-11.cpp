#include <iostream>

using namespace std;

// When we inherit some class but that class is already inheriting some other class, then it is called multi level inheritance

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

class SonyTVRemote : public TVRemote
{
    bool hasNetflixBtn;

public:
    string tagLine;

    SonyTVRemote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology, string _brandName, bool _hasMic, bool _hasNetflixBtn, string _tagLine) : TVRemote(_numberOfCells, _price, _modelNumber, _circuitType, _technology, _brandName, _hasMic)
    {
        hasNetflixBtn = _hasNetflixBtn;
        tagLine = _tagLine;
    }
};

int main()
{
    SonyTVRemote bravia(2, 400, "sony123", "crt963", "secretTechno", "Bravia", true, true, "Fill colors in life");

    cout << bravia.brandName << endl;
    cout << bravia.getTechnology() << endl;
    cout << bravia.price << endl;
    cout << bravia.tagLine << endl;
    return 0;
}