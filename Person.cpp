#include "Person.h"

Person::Person() { 

    SetName("Unknown");
    SetAge(30);
    SetColorHair("Unknown");
    SetMood("Unknown");
    SetAliveStatus("Unknown");
    SetHungryStatus("Unknown");
}

Person::Person(const char* name, int age, string color_hair, string mood, bool is_alive, bool hungry) {

    SetName(name);
    SetAge(age);
    SetColorHair(color_hair);
    SetMood(mood);
    SetAliveStatus(is_alive);
    SetHungryStatus(hungry);
}

Person::Person(const string& nameStr) {
    SetName(nameStr.c_str());
    SetAge(30);
    SetColorHair("Unknown");
    SetMood("Unknown");
    SetAliveStatus(true);
    SetHungryStatus(true);
}

void Person::SetName(const char* name) {
    if (this->name != nullptr) {
        delete[] this->name;
    }
    int length = strlen(name) + 1;
    this->name = new char[length];
    strcpy_s(this->name, length, name);
}
void Person::SetAge(int a) {
    if (a >= 1 && a <= 100) {
        age = a;
    }
    else {
        cout << "Age is unreal\n";
    }
}
void Person::SetColorHair(string ch) {
    this->color_hair = color_hair;
}
void Person::SetMood(string m) {
    this->mood = mood;
}
void Person::SetAliveStatus(bool is_alive) {
    if (is_alive) {
        is_alive = true;
        cout << "The person is alive.\n";
    }
    else {
        is_alive = false;
        cout << "The person is not alive.\n";
    }
}
void Person::SetHungryStatus(bool hungry) {
    if (hungry) {
        hungry = true;
        cout << "The person is hungry.\n";
    }
    else {
        hungry = false;
        cout << "The person is not hungry.\n";
    }
}


string Person::GetName()
    const { return string(name);}
int Person::GetAge() {
    return age;
}
string Person::GetColorHair() {
    return color_hair;
}
string Person::GetMood() {
    return mood;
}
bool Person::GetAliveStatus() {
    return is_alive;
}
bool Person::GetHungryStatus() {
    return hungry;
}

void Person::Eat(string meal) {
    cout << GetName() << " is eating...\n";
}

void Person::Sleep() {
    cout << GetName() << " sleeps...\n";
    activity = 100;
    hungry = true;
}

void Person::Walk(string street) {
    if (activity > 50)
    {
        cout << GetName() << " walking...";
        activity -= 30;
        exp += 5;
        hungry = true;
    }
}

void Person::Read() {
    cout << GetName() << " is reading...\n";
}

void Person::Work() {
    if (activity < 10) {
        cout << GetName() << "doesn't want to work!";
        return;
    }
    if (hungry) {
        cout << GetName() << "want to eat, not to work!";
        return;
    }
    cout << GetName() << "working...";
    activity -= 10;
}

void Person::DisplayInfo() const {

    cout << "Person Information:" << "\n";
    cout << "  Name: " << name << "\n";
    cout << "  Age: " << age << " years" << "\n";
    cout << " Color Hair: " << color_hair << "\n";
    cout << "  Mood: " << mood << "\n";
    cout << " Is Alive: " << (is_alive ? "Yes" : "No") << "\n";
    cout << " Is Hungry: " << (hungry ? "Yes" : "No") << "\n\n";
}
