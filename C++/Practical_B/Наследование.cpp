#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    void calculateArea()
    {
        cout << "Фигура" << endl;
    }
};

class Rectangle : public Shape {
private:
    double _width;
    double _height;
public:
    Rectangle(double width, double height) {
        _width = width;
        _height = height;
    }

    void calculateArea() const
    {
        cout << "Площадь прямоугольник: " << _width * _height << endl;
    }
};

class Circle : public Shape {
private:
    double _radius;
public:
    Circle(double radius) {
        _radius = radius;
    }

    void calculateArea() const
    {
        cout << "Площадь круга: " << M_PI * _radius * _radius << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Rectangle rectangle(10, 40);
    Circle circle(25);

    rectangle.calculateArea();
    circle.calculateArea();

    return 0;
}

