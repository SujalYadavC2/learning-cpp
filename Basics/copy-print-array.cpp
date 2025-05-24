#include <iostream>
using namespace std;

//copy an array

void CopyArr(){
    int a1[6] {0,1,2,3,4,5};
    int a2[6];

    for (auto i = 0; i!=6; ++i){
        a2[i] = a1[i];
        cout << a2[i] <<"\n";
    }
}

void Print(){

    int v[] {1,2,3,4,5,6}; //no need to define a arrat bound when initialize with list

    for (auto x : v){ //it is read like x in v
        cout << x << "\n";
    }
}

int main(){
    //CopyArr();
    Print();
}
