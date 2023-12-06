#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>

using namespace std;

class Figure {
public:
    // Виртуальный метод для расчета площади
    virtual double calculateArea() const = 0;

    // Виртуальный деструктор
    virtual ~Figure() {
        cout << "Figure" << endl;
    }
};

class Rectangle : public Figure {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double calculateArea() const override 
    {
        if (width < 0 || height < 0) {
            throw 1;
        }
        else {
            if (width == 0 || height == 0) {
                throw 2;
            }
        }

        return width * height;
    }

    ~Rectangle() {
        cout << "Rectangle" << endl;
    }
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() const override
    {
        if (radius < 0) {
            throw 1;
        }
        else {
            if (radius == 0) {
                throw 2;
            }
        }

        return M_PI * radius * radius;
    }

    ~Circle() {
        cout << "Circle" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<Figure*> shapes;
    
    shapes.push_back(new Rectangle(5, 10));
    shapes.push_back(new Rectangle(-3, 10));
    shapes.push_back(new Rectangle(0, 10));
    shapes.push_back(new Circle(10));
    shapes.push_back(new Circle(-5));
    shapes.push_back(new Circle(0));


    for (const auto& shape : shapes) {
        try {
            cout << "Area: " << shape->calculateArea() << endl;
        }
        catch (int exeption) {
            switch (exeption)
            {
            case 1:
                cout << "Exception 1: Фигура с отрицательными сторонами" << endl;
                break;
            case 2:
                cout << "Exception 2: Фигура с нулевой площадью" << endl;
            default:
                break;
            }
        }
    }

    for (auto& figure : shapes) {
        delete figure;
    }
}
