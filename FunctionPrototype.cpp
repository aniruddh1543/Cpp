#include<iostream>
using namespace std;

// Function prototype
    int sum(int a, int b);


int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    return 0;
}
/* Here num 1 and num2 are actual parameters 
Formal parameters a and b will take values from actual para i.e num1 and num2 */

int sum(int a, int b){
 int c = a+b;
    return c;
}
