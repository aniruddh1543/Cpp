#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000;
    double amount;

    cout << "===== ATM MENU =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your balance is: Rs. " << balance << endl;
            break;

        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;

            balance += amount;
            cout << "Deposit successful!\n";
            cout << "New balance: Rs. " << balance << endl;
            break;

        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful!\n";
                cout << "Remaining balance: Rs. " << balance << endl;
            } else {
                cout << "Insufficient balance!\n";
            }
            break;

        case 4:
            cout << "Thank you for using the ATM!\n";
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}