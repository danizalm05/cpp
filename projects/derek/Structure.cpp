 //https://www.w3schools.com/cpp/cpp_structs.asp
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
  struct {              // Structure declaration
     int myNum;         // Member (int variable)
     std::string myString;   // Member (string variable)
  } myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas;       // Structure variable   

 // Assign values to members of myStructure
myStruct1.myNum = 1;
myStruct1.myString = "Hello World!";

// Print members of myStructure
std::cout << myStruct1.myNum << "\n";
std::cout << myStruct1.myString << "\n";


struct Car {
  std::string brand;
  std::string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

//declare a variable that uses the structure
//  use the name of the structure as the data type of the variable:

   Car myCar0 ;
   myCar0.brand = "BMW";
   myCar0.model = "X5";
   myCar0.year = 1999;
} 