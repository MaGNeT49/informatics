#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Rectangle : public Shape {
private:
    double _width, _height;
public:
    Rectangle(double width, double height) : 
        _width(width), _height(height) {}

    double calculateArea() const override {
        return (_width * _width);
    }
};

class Circle : public Shape {
private:
    double _radius;
public:
    Circle(double radius) :
        _radius(radius) {}

    double calculateArea() const override {
        return M_PI * _radius * _radius;
    }
};

int main(void) {
    setlocale(LC_ALL, "Russian");

    vector<Shape*> shapes;

    shapes.push_back(new Rectangle(20, 3));
    shapes.push_back(new Circle(5));

    for (auto& shape : shapes) {
        cout << "Площадь фигуры равна: " << shape->calculateArea() << endl;
    }

    return 0;
}
