#include <iostream>
#include <queue>

using namespace std;

void enqueue(queue<int>& mas)
{
    int element;

    cout << "Введите элемент: ";
    cin >> element;

    mas.push(element);
}

int dequeue(queue<int>& mas)
{
    int deleted_element;

    deleted_element = mas.front();
    mas.pop();

    return deleted_element;
}

void output(queue<int> mas)
{
    cout << "Очередь: ";

    while (!mas.empty())
    {
        cout << mas.front() << " ";
        mas.pop();
    }

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    queue<int> mas;
    int size;
    bool is_play = true;

    cout << "Введите размер очереди: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        enqueue(mas);
    }

    cout << "Чтобы выйти из программы напишите \"0\" или любую букву." << endl;

    while (is_play)
    {
        int user_input;

        cout << "1.Добавить элемент\n2.Извлечь элемент\n3.Вывод очереди" << endl;;
        cin >> user_input;

        switch (user_input)
        {
        case 0:
            is_play = false;
            break;
        case 1:
            enqueue(mas);
            break;
        case 2:
            cout << "Извлечён элемент: " << dequeue(mas) << endl;
            break;
        case 3:
            output(mas);
            break;
        default:
            cout << "Введено неправильное значение!" << endl;
            break;
        }
    }

    return 0;
}
