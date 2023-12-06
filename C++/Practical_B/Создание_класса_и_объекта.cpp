#include <iostream>
#include <vector>

using namespace std;

class Dog {
public:
    string Name;
    double Age;

    Dog(string name, int age) {
        Name = name;
        Age = age;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");

    vector<Dog*> dogs;

    dogs.push_back(new Dog("Васька", 5));
    dogs.push_back(new Dog("Арчи", 2));
    dogs.push_back(new Dog("Барон", 10));
    dogs.push_back(new Dog("Вольт", 1));

    for (auto& dog : dogs) {
        cout << "Собаке " << dog->Name << ", " << dog->Age << " Лет" << endl;
    }

    return 0;
}
