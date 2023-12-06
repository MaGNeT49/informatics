#include <iostream>
#include <vector>

using namespace std;

class Fruit {
public:
    virtual void getVitamin() const 
    {
        cout << "Получен витамин с фрукта!" << endl;
    }
};

class Apple : public Fruit {
public:
    void getVitamin() const override
    {
        cout << "Получен витамин с яблока!" << endl;
    }
};

class Orange : public Fruit {
public:
    void getVitamin() const override
    {
        cout << "Получен витамин с апельсина!" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<Fruit*> fruits;

    fruits.push_back(new Fruit());
    fruits.push_back(new Apple());
    fruits.push_back(new Orange());

    for (auto& fruit : fruits) {
        fruit->getVitamin();
    }

    return 0;
}
