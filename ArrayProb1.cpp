// Code for largest elemnt in array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,5,9,7,6};
    int n = 5;

    int largest = arr[0] ;

    for(int i=1;i<n;i++)
    if (arr[i]>largest)
    {
        largest = arr[i];
    }
    cout << "The largest no is :"<< largest ;
    
    return 0;
}
