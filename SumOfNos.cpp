#include <iostream>
using namespace std;

int main() {
    int i=1,n, sum=0;
    cout<< "Enter the no u want to calculate the sum for:";
    cin>> n ;
    while (i<=n)
    {
        sum = sum+i ;

        i++ ;

    }
    cout<< sum ;
    
    return 0;
}
