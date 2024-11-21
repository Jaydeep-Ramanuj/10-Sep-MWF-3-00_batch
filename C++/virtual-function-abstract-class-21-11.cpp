#include <iostream>

using namespace std;

class Mammals
{

public:
    int lagsCount;
    string vocals;

    Mammals(int _lagsCount, string _vocals)
    {
        lagsCount = _lagsCount;
        vocals = _vocals;
    }

    virtual void doDigestBread()
    {
        cout << "Bread digested";
    }

    virtual void doSpeak() = 0;

    virtual void walk() = 0;
};

class Cat : public Mammals
{
public:
    string name;

    Cat(int _lagsCount, string _vocals, string _name) : Mammals(_lagsCount, _vocals)
    {
        name = _name;
    }
    void doDigestBread() override
    {
        cout << "Bread digested by Cat";
    }

    void doSpeak()
    {
        cout << "Meow Meow";
    }

    void walk()
    {
        cout << "Cat is Walking with 4 lags";
    }
};
class Human : public Mammals
{
public:
    string name;

    Human(int _lagsCount, string _vocals, string _name) : Mammals(_lagsCount, _vocals)
    {
        name = _name;
    }

    void doSpeak()
    {
        cout << "Bolse";
    }

    void walk()
    {
        cout << "Human is Walking with 2 lags";
    }
};

int main()
{

    Cat kitty(4, "Meow Meow", "Meow1");
    Human hooman(4, "Bolse", "Jay");
    cout << "\n";

    kitty.doDigestBread();
    cout << "\n";
    kitty.doSpeak();
    cout << "\n";
    hooman.doSpeak();
    cout << "\n";
    kitty.walk();
    cout << "\n";
    hooman.walk();
    return 0;
}