// Print 1 to 10 except 5
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            continue;
        }
        cout<< i <<endl;
    }
     return 0;
}
