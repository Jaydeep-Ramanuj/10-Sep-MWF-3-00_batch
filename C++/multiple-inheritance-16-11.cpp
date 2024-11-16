#include <iostream>

using namespace std;

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

class SmartRemote
{
    bool hasTouchScreen;
    bool hasSunRoofBtn;
    bool hasConvertibleBtn;

public:
    SmartRemote(bool _hasTouchScreen, bool _hasSunRoofBtn, bool _hasConvertibleBtn)
    {
        hasTouchScreen = _hasTouchScreen;
        hasSunRoofBtn = _hasSunRoofBtn;
        hasConvertibleBtn = _hasConvertibleBtn;
    }

    bool hasTouchBtns()
    {
        return hasTouchScreen;
    }
    bool hasSFBtn()
    {
        return hasSunRoofBtn;
    }
    bool hasCBtn()
    {
        return hasConvertibleBtn;
    }
};

class CarRemote : public remote, public SmartRemote
{

public:
    bool hasAutoParkingBtn;

    CarRemote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology, bool _hasTouchScreen, bool _hasSunRoofBtn, bool _hasConvertibleBtn, bool _hasAutoParkingBtn) : remote(_numberOfCells, _price, _modelNumber, _circuitType, _technology), SmartRemote(_hasTouchScreen, _hasSunRoofBtn, _hasConvertibleBtn)
    {
        hasAutoParkingBtn = _hasAutoParkingBtn;
    }

    void autoParkCar()
    {
        cout << "Magic !, Car is automatically parking";
    }
};

int main()
{

    CarRemote teslaS3(4, 1000, "TeslaT", "TTT", "SecretType", true, true, false, true);
    cout << teslaS3.hasAutoParkingBtn << endl;
    teslaS3.autoParkCar();
    cout << "\n";
    cout << teslaS3.price << endl;
    cout << teslaS3.hasSFBtn();

    return 0;
}