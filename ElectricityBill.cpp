#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter the units:";
    cin >> units ;
    if (units>=0 && units<=100)
    {
        cout<< "The bill is :" << 5*units ;
    }
    else if (units>=101 && units<=200)
    {
        cout<< "The bill is :" << 7*units ;
    }
    else 
    {
        cout << "The bill is : " << 10*units ;
    }

    
    
    
    return 0;
}