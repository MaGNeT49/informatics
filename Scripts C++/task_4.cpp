#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;

    cin >> number;

    if (number % 4 == 0)
    {
        wcout << L"Високосный год" << endl;
    }
    else
    {
        wcout << L"Невисокосный год" << endl;
    }

    system("pause");

    return 0;
}
