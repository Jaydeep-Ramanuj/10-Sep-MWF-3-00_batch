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
    bool hasNetflixBtn;
    int currentChannelNumber = 1;

public:
    int channelCount;

    TVRemote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology, bool _hasNetflixBtn, int _channelCount) : remote(_numberOfCells, _price, _modelNumber, _circuitType, _technology)
    {
        hasNetflixBtn = _hasNetflixBtn;
        channelCount = _channelCount;
    }

    void changeChannel(int channelNumber)
    {
        currentChannelNumber = channelNumber;
    }

    int getCurrentChannel()
    {
        return currentChannelNumber;
    }
};
class SpeakerRemote : public remote
{
    bool hasMic;
    int currentVolume = 50;

public:
    int maximumAllowedVolume;

    SpeakerRemote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology, bool _hasMic, int _maximumAllowedVolume) : remote(_numberOfCells, _price, _modelNumber, _circuitType, _technology)
    {
        hasMic = _hasMic;
        maximumAllowedVolume = _maximumAllowedVolume;
    }

    void increaseVolume(int vol = 1)
    {
        currentVolume += vol;
    }
    void decreaseVolume(int vol = 1)
    {
        currentVolume -= vol;
    }

    int getCurrentVolume()
    {
        return currentVolume;
    }
};
class CarRemote : public remote
{

    bool hasAntiTheftFeature;

public:
    CarRemote(int _numberOfCells, int _price, string _modelNumber, string _circuitType, string _technology, bool _hasAntiTheftFeature) : remote(_numberOfCells, _price, _modelNumber, _circuitType, _technology)
    {
        hasAntiTheftFeature = _hasAntiTheftFeature;
    }

    void lockCar()
    {
        cout << "Car is locked now.";
    }
    void unlockCar()
    {
        cout << "Car is Unlocked now.";
    }

    bool hasBuiltInAntiTheftFeature()
    {
        return hasAntiTheftFeature;
    }
};

int main()
{
    TVRemote lg(2, 250, "lg132", "crt232", "lgInnovation", false, 250);

    // cout << lg.channelCount << endl;
    // lg.changeChannel(15);
    // cout << lg.getCurrentChannel() << endl;

    SpeakerRemote jbl(2, 350, "jbl132", "crt232", "jbljbl", true, 250);

    // cout << jbl.maximumAllowedVolume << endl;
    // jbl.increaseVolume(10);
    // cout << jbl.getCurrentVolume() << endl;

    CarRemote swift(3, 250, "suzukil132", "crt232", "suzu", true);
    cout << swift.hasBuiltInAntiTheftFeature() << endl;
    swift.unlockCar();
    swift.lockCar();

    return 0;
}