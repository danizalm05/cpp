 /*  
 StrClass.cpp 
 C++ Programming Tutorial 24 - String Class and C Strings
  https://www.youtube.com/watch?v=-t07hCkdHjI&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=26
 C++ Programming Tutorial 25 - getline for Strings
  https://www.youtube.com/watch?v=5ZX6-ZzTZ98&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=27

 C++ Programming Tutorial 26 - String Modifier Methods
   https://www.youtube.com/watch?v=mp7Um7k-G4I&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=28
 
 g++ StrClass.cpp
 3:04
 string is a class
 */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
 
using std::cout;

main(){
    cout << "String Class and C String"<< std::endl;   
    std::string greeting = "hello"; 
    std::cout << greeting[0] <<  std::endl;
    std::string  r = greeting + " there" ;//'r' is a vlass
    std::cout <<"r =  " + r <<  std::endl;
    r.append("  koko");// Another way to modiefy a string
     std::cout <<"r =  " + r <<  std::endl;
    
    r.insert(3,"  333  ");// Another way to modiefy a string
     std::cout <<"r =  " + r <<  std::endl;

    r.erase(3,1);//  
     std::cout <<"erase op r =  " + r <<  std::endl; 

    r.replace(1,6,"======") ;// start point 1 len 6 
     std::cout <<"replace op r =  " + r <<  std::endl; 

    std::cout <<"r.length() = " << r.length() <<  std::endl;
    char name[] =  "hello there" ; // 'name' is an array of chars fix size
    std::cout <<"name = " << name <<  std::endl; 

    std::string gretting0; 
    std::string left_over; 
    std::cin >> gretting0;// cin  grabs only  the first word
    std::cin >> left_over;
    
    std::cout <<gretting0 <<  std::endl;
    std::cout <<left_over <<  std::endl;
    
    std::string st; 
    getline( std::cin, st);//Read a line from stream into a string.
    std::cout <<st <<  std::endl; 
    std::cout <<"End" <<  std::endl;

}  
 