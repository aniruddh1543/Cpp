// Write a C++ program that takes numbers from the user continuously. Use break to stop when the user enters 0.
#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Enter a number: ";
        cin >> n;

        if (n == 0) {
            break;
        }

        cout << "You entered: " << n << endl;
    }

    return 0;
}
