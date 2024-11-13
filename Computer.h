#include <string>
#include <iostream>
using namespace std;

class Computer {

private:
    char* kind = nullptr;
    int price;
    int age;
    string origin;
    string color;
    bool is_work;

public:

    //constructor

    Computer();
    Computer(const char*, int, int, string, string, bool);
    Computer(const string&);

    //Getter

    void SetKind(const char*);
    void SetPrice(int);
    void SetAge(int);
    void SetOrigin(string);
    void SetColor(string);
    void SetIsWork(bool);

    //Setter

    string GetKind() const;
    int GetPrice();
    int GetAge();
    string GetOrigin();
    string GetColor();
    bool GetIsWork();

    //Method

    void Eat(string electricity);
    void Teach();
    void Give(string money);
    void Joy();
    void DisplayInfo() const;

    //Destructor

    ~Computer() {
        if (kind != nullptr) {
            delete[] kind;
            kind = nullptr;
        }
    }

};
