#include<iostream>
using namespace std;


typedef struct employee
{
    int EmpId;
    char favChar;
    float Salary;
}ep;
int main(){
 ep Ani;
 Ani .EmpId = 1543;
 Ani .favChar = 'a';
 Ani .Salary = 130000000;
cout<<"The value is "<<Ani .EmpId<<endl;
cout<<"The value is "<<Ani .favChar<<endl;
cout<<"The value is "<<Ani .Salary<<endl;


 return 0;
}
