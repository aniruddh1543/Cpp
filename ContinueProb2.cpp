//Print odd numbers from 1 to 20
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 21 ; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        cout<< i <<endl;
    }
    return 0;
}
