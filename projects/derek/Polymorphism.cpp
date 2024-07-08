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
  // Base class
class Animal {
  public:
    void animalSound() {
    std::cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    std::cout << "The pig says: wee wee \n" ;
  }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    std::cout << "The dog says: bow wow \n" ;
  }
}; 



int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
} 