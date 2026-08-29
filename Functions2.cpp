#include <iostream>
using namespace std;

int sum(int  , int ); // Function delaration
    


int main()
{
    int num1, num2;
    cout<<"Enter the first no :"<<endl;
    cin>>num1;
    cout<<"Enter the second no :"<<endl;
    cin>>num2;
    cout<<"The sum is : "<<sum(num1, num2);

    return 0;
}
// Fxn Definition
int sum(int a, int b){
 int c = a+b;
    return c;
}