#include <iostream>
using namespace std;
 
int main()
{
    int age;
    cout<< "enter the age :";
    cin>> age;
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
 
    case 2:
        cout << "Your are 2" << endl;
        break;
 
    default:
        cout << "No special cases" << endl;
    }
}