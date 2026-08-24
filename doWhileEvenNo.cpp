#include <iostream>
using namespace std;

int main() {
    int i = 2;

    do {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= 20);

    return 0;
}
