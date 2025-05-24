#include <iostream>
using namespace std;


// counting how many times a character apperars in a string

int count_x(char* p, char x){

    if (p == nullptr) return 0;

    int count = 0;

    for (; *p!=0; ++p){
        if (*p == x){
            ++count;
        }
    }
    return count;
}

int main(){

    char str[] = "Hello World!";
    char x = 'l';

    int count = count_x(str, x);

    cout << count <<"\n";

    return 0;

}
