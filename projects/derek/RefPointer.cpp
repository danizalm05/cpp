 //https://www.w3schools.com/cpp/cpp_references.asp
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() { 
  /*
  & operator   used to create a reference variable. But it 
  can also be used to get the memory address of a variable;
   which is the location of where the variable is stored on 
   the computer.

 When a variable is created in C++, a memory address is assigned
 to the variable. And when we assign a value to the variable, 
 it is stored in this memory address.

To access it, use the & operator, and the result will represent
 where the variable is stored:
  
  */
  std::string food00 = "kobe";  // food variable
  std::string &meal = food00;    // reference to food

  
   std::cout << food00 << "\n";  // Outputs kobe
   std::cout << meal << "\n";  // Outputs Pizkobeza

 /*
  A pointer  is a variable that stores the memory address as 
  its value.

A pointer variable points to a data type of the same type,
 and is created with the * operator. 
 The address of the variable you're working with is assigned
  to the pointer:
 The  preferred way to declere pointer: ' string* mystring; '  
 */

/*
Create a pointer variable with the name ptr, that should point
 to a string variable named food:

 string food = "Pizza";
 string* ptr = &food;
 */
std::string food = "Pizza";  // A food variable of type string
std::string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
std::cout << "food = "<< food << "\n";

// Output the memory address of food (0x6dfed4)
std::cout << "&food = "<< &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
std::cout << "ptr = "<< ptr << "\n";
std::cout << "\n+++++++++++++++++++++++\n"<<  "\n";
//Dereference
//https://www.w3schools.com/cpp/cpp_pointers_dereference.asp
std::cout << "++   Dereference     ++"<<  "\n";
std::string food01 = "Lahohh";  // Variable declaration
std::string* ptr01 = &food01;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
std::cout <<"ptr01 = " << ptr01 << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
std::cout <<"*ptr01 = " << *ptr01 << "\n";

// Change the value of the pointer
std::cout << "\n++++++  Change the value of the pointer     +++++++\n"<<  "\n";

*ptr01 = "Hamburger";

// Output the new value of the pointer (Hamburger)
std::cout <<"*ptr01 = "<< *ptr << "\n";

// Output the new value of the food variable (Hamburger)
std::cout <<"food01 = "<< food01 << "\n";

} 