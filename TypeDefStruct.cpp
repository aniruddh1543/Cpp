#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;
int main(){
ep Ani;
    
    Ani .eId = 1;
    Ani .favChar = 'c';
    Ani .salary = 120000000;
    cout<<"The value is "<<Ani.eId<<endl; 
    cout<<"The value is "<<Ani.favChar<<endl; 
    cout<<"The value is "<<Ani.salary<<endl; 
    return 0;
}