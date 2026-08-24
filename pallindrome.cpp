#include <iostream>
using namespace std;

int main() {
    int n, rev = 0 , temp, digit ;
    cout<< "Enter a no:";
    cin>> n ;
    
    temp = n ;
    while (n>0)
    {
        digit = n%10 ;
        rev = rev * 10 + digit ;
        n = n/10 ;
    
    }
    if (temp == rev)
    {
        cout<< "Pallindrome";
    }
    else{
        cout<< "Not Pallindrome";
    }

    return 0;
}
