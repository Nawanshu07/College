#include <iostream>
using namespace std;

class Bank_account {
private:
    float balance;
    int account;

public:
    void input() {
        cout << "Enter account no. & balance: ";
        cin >> account >> balance;
    }

    void deposit() {
        int a;
        cout << "Enter amount: ";
        cin >> a;
        balance = balance + a;
    }

    void withdraw() {
        int a;
        cout << "Enter amount: ";
        cin >> a;

        if (balance < a)
            cout << "Insufficient balance";
        else
            balance = balance - a;
    }

    void display() {
        cout << "A/c No: " << account << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank_account b1;
    b1.input();

    int x = 0, ch;

    while (x == 0) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display\n";
        cin >> ch;

        if (ch == 1)
            b1.deposit();
        else if (ch == 2)
            b1.withdraw();
        else if (ch == 3)
            b1.display();

        cout << "Enter 0 to continue: ";
        cin >> x;
    }

    return 0;
}
