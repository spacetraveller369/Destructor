#include <string>
#include <iostream>
using namespace std;

class Person {

private:
    char* name = nullptr;
    int age;
    string color_hair;
    string mood;
    bool is_alive = true;
    bool hungry = true;

    long long exp; // ����
    short activity = 100; // ����� ������� (0-100)


public:

    Person(); //�����������
    Person(const char*, int age, string color_hair, string mood, bool is_alive, bool hungry);
    Person(const string&);

    void SetName(const char* name); //������
    void SetAge(int a);
    void SetColorHair(string ch);
    void SetMood(string m);
    void SetAliveStatus(bool is_alive);
    void SetHungryStatus(bool hungry);

    string GetName() const; //������
    int GetAge();
    string GetColorHair();
    string GetMood();
    bool GetAliveStatus();
    bool GetHungryStatus();

    void Eat(string meal); //������ 
    void Sleep();
    void Walk(string street);
    void Work();
    void Read();
    void DisplayInfo() const;

    ~Person() {
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
    }

};
