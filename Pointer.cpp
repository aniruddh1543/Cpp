#include<iostream>
using namespace std;

int main(){
int a = 3;
int* b ; // int*b = &a
b= &a;

// & ---> address of operator
cout<<"The address of a is :"<<&a<<endl;
cout<<"The address of a is :"<<b<<endl;

// in this both will give the address of a 

// * ----> De refrence operator

cout << "The value at address b is :" <<*b <<endl;

// This will give the value at b
 // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
