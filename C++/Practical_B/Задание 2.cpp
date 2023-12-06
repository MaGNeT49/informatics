#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

class Product {
private:
    double price, weight;
public:
    Product (double p, double w) {
        price = p;
        weight = w;
    }
    double getTotalPrice() {
        if (price < 0 || weight < 0) {
            throw invalid_argument("Отрицательные значения!");
        }
        else {
            if (price == 0 || weight == 0) {
                throw invalid_argument("Нулевые значения!");
            }
        }

        return price * weight;
    }
};

class Apple : public Product {
private:
    string variety;
public:
    Apple(double price, double weight, string v) :Product(price, weight), variety(v) {}
};

class Orange : public Product {
private:
    string origin;
public:
    Orange(double price, double weight, string o) :Product(price, weight), origin(o) {}
};

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<Product*> products;

    products.push_back(new Apple(5, 2, "Голден"));
    products.push_back(new Apple(0, 1, "Золотое"));
    products.push_back(new Apple(-10, 1, "Красное"));
    products.push_back(new Orange(2, 3, "Азербайджан"));
    products.push_back(new Orange(5, 0, "Грузия"));
    products.push_back(new Orange(-5, -3, "Армения"));

    for (const auto& product : products) {
        try {
            cout << "Стоимость продукта: " << product->getTotalPrice() << endl;
        }
        catch (invalid_argument const& ex) {
            cout << ex.what() << endl;
        }
    }
}
