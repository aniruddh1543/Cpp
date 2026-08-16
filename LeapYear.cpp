#include <iostream>
using namespace std;

int main() {
    
    int Year;
    cout<< "Enter the Year:";
    cin>> Year ;
    if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
    cout<< "It is a Leap Year";
    else
    cout<< "It is not a Leap year";
    
    
    return 0;
} 