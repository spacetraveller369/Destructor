#include <string>
#include <iostream>
using namespace std;

class Plant {

private:
    char* kind = nullptr;
    int age;
    string color;
    bool alive = true;
    bool hungry = true;

    short activity = 100;

public:

    Plant();
    Plant(const char*, int, string, bool, bool);
    Plant(const string&);


    void SetKind(const char* kind);
    void SetAge(int);
    void SetColor(string clr);
    void SetAliveStatus(bool alive);
    void SetHungryStatus(bool hungry);

    string GetKind() const;
    int GetAge();
    string GetColor();
    bool GetAliveStatus();
    bool GetHungryStatus();


    void Drink(string water);

    void Grow();

    void Give(string oxygen);

    void Joy();

    void DisplayInfo() const;

    ~Plant() {
        if (kind != nullptr) {
            delete[] kind;
            kind = nullptr;
        }
    }
};
