#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int number;
    int count = 0;

    cin >> number;

    for (int i = 1; i < number + 1; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count > 2)
    {
        cout << "Число непростое." << endl;
    }
    else
    {
        cout << "Число простое." << endl;
    }

    return 0;
}
