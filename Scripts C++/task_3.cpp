#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    int count = 0;

    cin >> number;

    for (int i = 1; i < number + 1; i++)
    {
        if (number % i == 0)
        {
            count += 1;
        }
    }

    if (count > 2)
    {
        wcout << L"Непростое" << endl;
    }
    else
    {
        wcout << L"Простое" << endl;
    }

    system("pause");

    return 0;
}
