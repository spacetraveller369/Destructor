#include "Person.h"
#include "Cockroach.h"
#include "Computer.h"
#include "Plant.h"

int main()
{
    cout << "Enter Person's name -> ";
    string name;
    cin >> name;

    Person person1;
    person1.SetName(name.c_str());
    person1.DisplayInfo();

    string name2 = "Ilona";
    Person person2(name2);
    person2.DisplayInfo();

    cout << "\n";
    cin.ignore();

    Cockroach cockroach1;
    cockroach1.SetName(name.c_str());
    person1.DisplayInfo();

    string name2 = "Viktor";
    Cockroach cockroach2(name2);
    cockroach2.DisplayInfo();

    cout << "\n";
    cin.ignore();

    Computer computer1;
    computer1.SetKind(kind.c_str());
    computer1.DisplayInfo();

    string kind2 = "Dell";
    Computer computer2(kind2);
    computer2.DisplayInfo();

    cout << "\n";
    cin.ignore();
    
    Plant plant1;
    plant1.SetKind(kind.c_str());
    plant1.DisplayInfo();

    string plant2 = "Hibiscus";
    Plant plant2(kind2);
    plant2.DisplayInfo();
}
