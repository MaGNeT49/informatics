#include <iostream>
#include <string>

using namespace std;

int main()
{
    string gl = "eyuioaEYUIOA", str;
    int count = 0;

    getline(cin, str);

    for (int i = 0; i < int(str.length()); i++)
    {
        for (int j = 0; j < int(gl.length()); j++)
        {
            if (str[i] == gl[j])
            {
                count += 1;
            }
        }
    }

    cout << count << endl;

    system("pause");

    return 0;
}
