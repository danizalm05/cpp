//https://www.w3schools.com/cpp/
#include <iostream>
using namespace std;

int main() {
const int myNum = 15;  // myNum will always be 15  
int myAge = 35;
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
 
  cout << "Hello World! \n";
  cout << "I am learning C++"  << endl;
  cout <<  myNum << endl; 
  cout << "I am " << ++myAge << " years old." << endl;


  //input 
 int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;
  return 0;
} 