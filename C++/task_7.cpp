#include <iostream>

using namespace std;

int main()
{
    int number;
    int answer = 1;

    cin >> number;

    for (int i = 1; i < number + 1; i++)
    {
        answer *= i;
    }

    cout << answer << endl;

    return 0;
}
