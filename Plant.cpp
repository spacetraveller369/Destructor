#include "Plant.h"

Plant::Plant() {

    SetKind("Unknown");
    SetAge(1);
    SetColor("Unknown");
    SetAliveStatus(true);
    SetHungryStatus(true);
}

Plant::Plant(const char* kind, int age, string color, bool alive, bool hungry) {

    SetKind(kind);
    SetAge(age);
    SetColor(color);
    SetAliveStatus(alive);
    SetHungryStatus(hungry);
}

Plant::Plant(const string& kind) {
    SetKind(kind.c_str());
    SetAge(1);
    SetColor("Unknown");
    SetAliveStatus(true);
    SetHungryStatus(true);
}

void Plant::SetKind(const char* kind) {
    if (this->kind != nullptr) {
        delete[] this->kind;
    }
    int length = strlen(kind) + 1;
    this->kind = new char[length];
    strcpy_s(this->kind, length, kind);
}

void Plant::SetAge(int a) {
    if (a >= 0 && a <= 30) {
        age = a;
    }
    else {
        throw "Wrong age!\n";
    }
}

void Plant::SetColor(string color) {
    this->color = color;
}

void Plant::SetAliveStatus(bool alive) {
    if (alive) {
        alive = true;
        cout << "Plant is alive.\n";
    }
}
void Plant::SetHungryStatus(bool hungry) {
    if (hungry) {
        hungry = true;
        cout << "Plant is hungry.\n";
    }
}

string Plant::GetKind() const {
    return string(kind);
}
int Plant::GetAge() {
    return age;
}
string Plant::GetColor() {
    return color;
}
bool Plant::GetAliveStatus() {
    return alive;
}
bool Plant::GetHungryStatus() {
    return hungry;
};


void Plant::Drink(string water) {
    cout << GetKind() << " is drinking...\n";
    hungry = false;
    
}

void Plant::Grow() {
    cout << GetKind() << " is growing...\n";
    activity = 100;
    hungry = true;
 
}

void Plant::Give(string oxygen) {
    cout << GetKind() << " is giving me an oxygen to breathe...\n";
}

void Plant::Joy() {
    cout << GetKind() << " is giving a joy to my cat...\n";
}

void Plant::DisplayInfo() const {

    cout << "Plant Information:" << "\n";
    cout << "  Kind: " << kind << "\n";
    cout << "  Age: " << age << " years" << "\n";
    cout << " Color: " << color << "\n";
    cout << " Is Alive: " << (alive ? "Yes" : "No") << "\n";
    cout << " Is Hungry: " << (hungry ? "Yes" : "No") << "\n\n";
}