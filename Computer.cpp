#include "Computer.h"

Computer::Computer() {
    SetKind("Unknown");
    SetPrice(0);
    SetAge(0);
    SetOrigin("Unknown");
    SetColor("Unknown");
    SetIsWork(true);

}



Computer::Computer(const char* kind, int price, int age, string origin, string color, bool is_work) {

    SetKind(kind);
    SetPrice(price);
    SetAge(age);
    SetOrigin(origin);
    SetColor(color);
    SetIsWork(is_work);
}

Computer::Computer(const string& kind) {
    SetKind(kind.c_str());
    SetPrice(0);
    SetAge(0);
    SetOrigin("Unknown");
    SetColor("Unknown");
    SetIsWork(true);
}

void Computer::SetKind(const char* kind) {
    if (this->kind != nullptr) {
        delete this->kind;
    }
    int length = strlen(kind) + 1;
    this->kind = new char[length];
    strcpy_s(this->kind, length, kind);
}

void Computer::SetPrice(int price) {
    this->price = price;
}

void Computer::SetAge(int age) {
    if (age >= 1) this->age = age;
    else throw "Unreal age!\n";
}

void Computer::SetOrigin(string origin) {
    this->origin = origin;
}

void Computer::SetColor(string color) {
    this->color = color;
}
void Computer::SetIsWork(bool is_work) {
    this->is_work = is_work;
}


string Computer::GetKind() const {
    return string(kind);
}
int Computer::GetPrice() {
    return price;
}
int Computer::GetAge() {
    return age;
}
string Computer::GetOrigin() {
    return origin;
}
string Computer::GetColor() {
    return color;
}
bool Computer::GetIsWork() {
    if (is_work) {
        cout << "This computer works" << "\n";
    }
};


void Computer::Eat(string electricity) {
    cout << GetKind() << "  eats some electricity..\n";
}

void Computer::Teach() {
    cout << GetKind() << "  teaches me...\n";
}

void Computer::Give(string money) {
    cout << GetKind() << "  gives me some money...\n";
}

void Computer::Joy() {
    cout << GetKind() << "  shows me films...\n";
}

void Computer::DisplayInfo() const {

    cout << "Information:" << "\n";
    cout << "Kind: " << kind << "\n";
    cout << "Price: " << price << "$" << "\n";
    cout << "Age:  " << age << "\n";
    cout << "Color: " << color << "\n";
    cout << "Is work: " << (is_work? "Yes" : "No") << "\n";
}