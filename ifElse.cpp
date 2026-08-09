#include<iostream>
using namespace std;

int main(){
int age;    
cout << "Enter a no:";
cin>> age ;
if (age>50)
{
    cout<< "Age is greater than 50" <<endl;
}
else if (age==50)
{
    cout<< "Age is equal to 50" <<endl;
}
else
{
    cout<<"Age is less than 50"<<endl;
}
    return 0;

}