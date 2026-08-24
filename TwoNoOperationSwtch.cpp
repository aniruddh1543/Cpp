#include <iostream>
using namespace std;

int main() {
    float a,b;
    char op;
    cout<< "Enter the two numbers :";
    cin>> a >> b ;
    cout<< "Enter the operation you want to perform :";
    cin>> op;
    

switch (op)
{
    case '+' :
    cout<< a + b ;
    break;
    
    case '-' :
    cout<< a - b ;
    break;
    
    case '*' :
    cout<< a * b ;
    break;

    case '/' :
    cout<< a/b ;
    break;
} 
    return 0;
}