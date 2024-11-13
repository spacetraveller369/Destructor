#include "Cockroach.h"


Cockroach::Cockroach() {

    SetName("Unknown");
    SetSize(10);
    SetColor("Unknown");
    SetAfwulStatus(true);
    SetDangStatus(false);

}

Cockroach::Cockroach(const char* name, double size, string color, bool is_awful, bool is_dang) {

    SetName(name);
    SetSize(size);
    SetColor(color);
    SetAfwulStatus(is_awful);
    SetDangStatus(is_dang);

}

void Cockroach::SetName(const char* name) {
    if (this->name != nullptr) {
        delete[] this->name;
    }
    int length = strlen(name) + 1;
    this->name = new char[length];
    strcpy_s(this->name, length, name);
}
void Cockroach::SetSize(double s) {
    if (s >= 1 && s <= 30) {
        size = s;
    }
    else {
        throw "Size is unreal\n";
    }
}
void Cockroach::SetColor(string c) {
    this->color = color;
}
void Cockroach::SetAfwulStatus(bool awful) {
    if (awful) {
        is_awful = true;
        cout << "Cockroach is awful.\n";
    }
    else {
        is_awful = false;
        cout << "Cockroach is nice.\n";
    }
}
void Cockroach::SetDangStatus(bool dang) {
    if (dang) {
        is_dang = true;
        cout << "Cockroach is dangerous for your life!!!.\n";
    }
    else {
        is_dang = false;
        cout << "Cockroach is safe.\n";
    }

}


string Cockroach::GetName() const { return string(name); }

double Cockroach::GetSize() {
    return size;
}
string Cockroach::GetColor() {
    return color;
}
bool Cockroach::GetAwfulStatus()
{
    return is_awful;
}
bool Cockroach::GetDangStatus()
{
    return is_dang;
};


void Cockroach::Eat(string meal) {
    cout << GetName() << " is eating...\n";
    activity = 100;
}

void Cockroach::Sleep() {
    cout << GetName() << " is sleeping...\n";
    activity = 100;
}

void Cockroach::Run(string slipper) {
    if (activity > 50)
    {
        cout << GetName() << " running...";
        activity -= 30;

    }
}

void Cockroach::MakeDisaster() {
    cout << GetName() << " is making a disaster everywhere he appears...\n";
}

void Cockroach::Frighten() {
    cout << GetName() << "  frightens everyone in the house...\n";
}

void Cockroach::DisplayInfo() const {

    cout << "Cockroach Information:" << "\n";
    cout << "  Name: " << name << "\n";
    cout << "  Size: " << size << " cm" << "\n";
    cout << " Color: " << color << "\n";
    cout << " Is Awful: " << (is_awful ? "Yes" : "No") << "\n";
    cout << " Is Dangerous: " << (is_dang ? "Yes" : "No") << "\n";
}