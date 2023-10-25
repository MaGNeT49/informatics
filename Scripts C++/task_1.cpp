#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;

    cin >> number;

    for (int i = 1; i < 11; i++)
    {
        cout << number * i << " ";
    }

    cout << endl;

    system("pause");

    return 0;
}
