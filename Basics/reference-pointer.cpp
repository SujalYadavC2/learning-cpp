#include <iostream>
using namespace std;


void Reference(){
    int a = 10;
    int& ref = a;

    cout << "Initial value of a: " << a << "\n";

    int b = 20;

    ref = b; // this changed the value of a.

    cout << "Value of a: " << a << "\n";

    //int& ref = b; //We can not change the ref because it is already refering to a. So this will give us an error.
}

void Pointer(){
    // We can change the pointer after we assign it

    int x = 5;
    int* p = &x;

    cout << "Initial value of x: " << x << "\n";

    *p = 4;

    cout << "Value of x after: " << x << "\n";

    // we can change where the pointer is pointing

    cout << "Pointer pointing to: " << *p << "\n";

    int b = 6;

    p = &b;

    cout << "Now pointer pointing to: " << *p <<"\n";
}


int main(){

    //Reference();

    Pointer();
    return 0;

}
