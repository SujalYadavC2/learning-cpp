#include <iostream>
using namespace std;

bool PrintAns(){
  char answer;
  cout << "Do you want to procced?(y or n): \n";
  cin >> answer;

  switch(answer){
    case 'y':
      return true;
    case 'n':
      return false;
    default:
      cout << "I will take that as a no.\n";
      return false;
  }
}

int main(){
  PrintAns();
}
