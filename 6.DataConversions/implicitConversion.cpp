#include <iostream>

using namespace std; 

// the general rule is that the compiler tries to convert from smaller type to larger type
int main(){ 
    int x;
    double y = 45.44 ; 

    x = y; // implicit conversion

    // implicit conversion using auto
    auto z = y; 

    cout << "The value of x: " << x << endl;
    cout << "The size of x: " << sizeof(x) << endl; 

     cout << "The value of x: " << z << endl;
    cout << "The size of x: " << sizeof(z) << endl;
}