#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string vowels = "eyuioaEYUIOAауоыиэяюёеАУОЫИЭЯЮЁЕ", str;
    int count = 0;

    getline(cin, str);

    for (int i = 0; i < int(str.length()); i++)
    {
        for (int j = 0; j < int(vowels.length()); j++)
        {
            //cout << str[i] << i << endl;
            if (str[i] == vowels[j])
            {
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}
