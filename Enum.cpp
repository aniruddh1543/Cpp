#include <iostream>
using namespace std;

int main()
{
    enum Meal{ brekfast, lunch, dinner};
    cout<<brekfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    Meal m1 = lunch;
    cout<<m1;

    return 0;
}