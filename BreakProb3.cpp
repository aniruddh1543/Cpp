// Write a C++ program to print numbers from 1 to 20. Use break to stop the loop when you find the first number divisible by 7.
#include <iostream>
using namespace std;

int main() {
    int i ;
    for ( i = 1; i < 21; i++)
    {
        if (i%7==0)
        {
            break;
        }
        cout<< i <<endl;
    }
    
return 0 ;
}
