#include <iostream>
using namespace std;


string reverseString(string givenString);

int main() {

  string inputString;
  cout << "What's your name? ";
  getline (cin, inputString);

  cout << "Your reversed name is " << reverseString(inputString);
    
}

string reverseString(string givenString) {
  char temp;
  int j = givenString.length() - 1;

  for(int index=0; index < j; index++, j--)
  {
    temp = givenString[index];
    givenString[index] = givenString[j];
    givenString[j] = temp;
  }

  return givenString;
}
