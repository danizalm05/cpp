 //https://www.w3schools.com/cpp/cpp_functions.asp
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


/*
When a parameter is passed to the function, it is called an 
argument. 
So, from the example down: fname is a parameter, 
while Liam, Jenny and Anja are arguments.

A parameter with a default value, is often known as an 
"optional parameter". From the example below,
   "Norway" is the default value.
*/
void myFunction(std::string fname = "Norway",int age =123) {
  std::cout << fname << age << " Refsnes\n";
}

int myFunction(int x) {
  return 5 + x;
}

//Pass By Reference
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
// Pass Arrays as Function Parameters
void myFunction02(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    std::cout << myNumbers[i] << "\n";
  }
}
 // Function Overloading
 int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}
//Recursion
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
/****************************/
int main() {
  myFunction("Liam",2);
  myFunction("Jenny",42);
  myFunction();
  myFunction("Anja",32);

  std::cout << myFunction(3);

  /* Pass By Reference*/
  int firstNum = 10;
  int secondNum = 20;

  std::cout << "\nBefore swap: " << "\n";
  std::cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  std::cout << "After swap: " << "\n";
  std::cout << firstNum << secondNum << "\n";

  //Pass Arrays as Function Parameters
 int myNumbers02[5] = {10, 20, 30, 40, 50};
  myFunction02( myNumbers02);

 // Function Overloading
 int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  std::cout << "Int: " << myNum1 << "\n";
  std::cout << "Double: " << myNum2;

  int result = sum(10);
  std::cout <<"\n Recursion  sum =  " << result;
  return 0;
}
 