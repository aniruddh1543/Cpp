// Skip Multiple of 3,from 1 to 30
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <=30 ; i++)
    {
        if (i%3==0)
        {
            continue;
        }
        cout<< i<<endl;
        
    }
    return 0;
}


