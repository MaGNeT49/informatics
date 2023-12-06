#include <iostream>
#include <vector>

using namespace std;

class BankAccount {
private:
    double _balance;
    double _numAccount;

    void checkBalance() {
        cout << "Ваш балан: " << _balance << endl;
    }
public:
    BankAccount(double balance, double numAccount) {
        _balance = balance;
        _numAccount = numAccount;
    }

    void deposit(double add) {
        _balance += add;
        cout << "Пополнено средств: " << add << endl;
        checkBalance();
    }

    void withdraw(double reduce) {
        _balance -= reduce;
        cout << "Выведенно средств: " << reduce << endl;
        checkBalance();
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");

    vector<BankAccount*> dogs;

    dogs.push_back(new BankAccount(10000, 4000));
    dogs.push_back(new BankAccount(2000, 1));

    dogs.at(0)->deposit(5);
    dogs.at(0)->withdraw(2000);
    dogs.at(1)->deposit(1000);
    dogs.at(1)->withdraw(500);

    return 0;
}
