#include <iostream>
using namespace std;

int main() {
    
    int num1 , num2 ;
    cout<< "Enter two numbers :";
    cin>> num1 >> num2;
    if (num1>num2)
    {
        cout<< "Num 1 is Larger" ;
    }
    else if (num1<num2)
    {
        cout<< "Num 2 is larger" ;
    }
    else 
    {
        cout<< "Num1 and Num2 are aqual";
    }

    
    
    return 0;
}