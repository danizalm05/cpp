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
 
 #include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};
//****************    Multilevel Inheritance 
// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "\n Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
  public:
    int  cc = 34;
};






int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;


   MyGrandChild myObj;
  myObj.myFunction();
  cout << myObj.cc;
  return 0;
}