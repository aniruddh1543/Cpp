#include<iostream>
using namespace std;
 

union money 

{
    /* data */
    int rice;
    char Car;
    float pounds;
    /* Union is used when we only have to use one data type from many which we have declared.
    It also gives better memory management */
};


int main(){


        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}
