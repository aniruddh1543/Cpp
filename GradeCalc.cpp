#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter marks obtained : ";
    cin>> num ;
    if (num>=90 && num<=100)  
    {
        cout<< "Grade A";
    }  
    else if (num>=75 && num<=89)
    {
        cout<< "Grade B";
    }
    else if (num>=60 && num<=74)
    {
        cout<< "Grade C";
    }
    else if (num>=40 && num<=59)
    {
        cout<< "Garde D";
    }
    else
    {
        cout<< "Grade E" ;
    }
    
    return 0;
}