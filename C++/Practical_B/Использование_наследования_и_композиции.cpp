#include <iostream>

using namespace std;

class House {
private:
    double _numberOfRooms;
    string _address;
public:
    House(double numberOfRooms, string address) : 
        _numberOfRooms(numberOfRooms), _address(address) {}

    string getAddress() {
        return _address;
    }

    double getNumberOfRooms() {
        return _numberOfRooms;
    }
};

class People {
protected:
    string _name;
    double _age;
public:
    People(string name, double age) : 
        _name(name), _age(age) {}
};

class Villager : People {
private:
    House _house;
public:
    Villager(string name, double age, House house) : People(name, age), _house(house) {}

    void linkHouse() {
        cout << "Житель " << _name << " живёт по адресу: " << _house.getAddress()
            << ", количество комнат в доме: " << _house.getNumberOfRooms() << endl;
    }
};

int main(void) {
    setlocale(LC_ALL, "Russian");

    House house(5, "Москва");
    Villager villager("Петя", 27, house);

    villager.linkHouse();

    return 0;
}
