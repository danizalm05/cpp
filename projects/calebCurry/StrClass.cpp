 /*   
 C++ Programming Tutorial 24 - String Class and C Strings
 C++ Programming Tutorial 25 - getline for Strings
 StrClass.cpp
 g++ StrClass.cpp
 https://www.youtube.com/watch?v=-t07hCkdHjI&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=26
 https://www.youtube.com/watch?v=5ZX6-ZzTZ98&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=27
 5:20
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
    std::cout <<"r =m" + r <<  std::endl;
    std::cout <<"r.length() = " << r.length() <<  std::endl;
    char name[] =  "hello there" ; // 'name' is an array char  are fix size
    std::cout <<"name = " << name <<  std::endl; 

    std::string gretting0;  
    std::cin >> gretting0;// cin  grabs only  the first word
    std::cout <<gretting0 <<  std::endl;
 
}  
 