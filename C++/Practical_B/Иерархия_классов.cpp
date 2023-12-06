#include <iostream>
#include <vector>

using namespace std;

class Vehicle {
protected:
    double _speed;
    string _type;
public:
    Vehicle(double speed, string type)
    {
        _speed = speed;
        _type = type;
    }
};

class Car : public Vehicle {
private:
    string _carBrand;
public:
    Car(double speed, string type, string carBrand) :
        Vehicle(speed, type), _carBrand(carBrand) {}

    void infoCar()
    {
        cout << "Бренд автомобиля: " << _carBrand << "; скорость: " << _speed << " км/ч." << endl;
    }
};

class Bicycle : public Vehicle {
private:
    double _wheelDiameter;
public:
    Bicycle(double speed, string type, double wheelDiameter) :
        Vehicle(speed, type), _wheelDiameter(wheelDiameter) {}

    void infoBicycle()
    {
        cout << "Диаметр колеса велосипеда: " << _wheelDiameter << "; скорость: " << _speed << " км/ч." << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Car car(100, "Автомобиль", "Lada");
    Bicycle bicycle(20, "Велосипед", 27.5);

    car.infoCar();
    bicycle.infoBicycle();

    return 0;
}
