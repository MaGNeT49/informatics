#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int year;

    cin >> year;

    if (year % 4 == 0)
    {
        cout << "Високосный год." << endl;
    }
    else
    {
        cout << "Невисокосный год." << endl;
    }

    return 0;
}
