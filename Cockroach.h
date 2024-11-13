#include <string>
#include <iostream>
using namespace std;


class Cockroach {

private:
    char* name = nullptr;
    double size;
    string color;
    bool is_awful;
    bool is_dang;

    short activity = 100;

public:

    Cockroach();
    Cockroach(const char*, double size, string color, bool is_awful, bool is_dang);
    Cockroach(const string&);

    void SetName(const char* name);
    void SetSize(double s);
    void SetColor(string c);
    void SetAfwulStatus(bool awful);
    void SetDangStatus(bool dang);

    string GetName() const;
    double GetSize();
    int GetPawsCount();
    string GetColor();
    string GetDesire();
    bool GetAliveStatus();
    bool GetAwfulStatus();
    bool GetDangStatus();
    bool GetHungryStatus();


    void Eat(string meal);

    void Sleep();

    void Run(string slipper);

    void MakeDisaster();

    void Frighten();

    void DisplayInfo() const;

    ~Cockroach() {
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
    }
};
