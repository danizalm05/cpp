 //https://www.w3schools.com/cpp/cpp_oop.asp
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
/*
OOP stands for Object-Oriented Programming.

Procedural programming:  writing procedures or functions that 
perform operations on the data.
object-oriented programming: creating objects that contain both
 data and functions.


   OOP makes it possible to create full reusable applications with less code and shorter development time
 In C++, there are three access specifiers:

    public - members are accessible from outside the class
    private - members cannot be accessed (or viewed) from outside the class
    protected - members cannot be accessed from outside the class, however,
     they can be accessed in inherited classes. 
 
 Encapsulation

The meaning of Encapsulation, is to make sure that "sensitive" data is 
hidden from users. 
To achieve this, you must declare class variables/attributes as private
 (cannot be accessed from outside the class). 
 If you want others to read or modify the value of a private member, you 
 can provide public get and set methods.

 Inheritance
   erived class (child) - the class that inherits from another class
    base class (parent) - the class being inherited from

To inherit from a class, use the : symbol.
/************************** */


class Car {        // The class
  private: 
    int code;
  public:          // Access specifier
    std::string brand;  // Attribute
    std::string model;  // Attribute
    int year;      // Attribute
    Car(std::string x, std::string y, int z); // Constructor declaration
    //Setter
    void setCode(int c){ 
       code = c;
    }
    //Getter
    int getCode(){
       return code;
    }
};

// Constructor definition outside the class
Car::Car(std::string x, std::string y, int z) {
  brand = x;
  model = y;
  year = z;
}

 
 
int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);
  carObj1.setCode(45655);
  // Print values
  std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  std::cout << "Code = " << carObj1.getCode() << "\n";
  std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  
   
  return 0;
}