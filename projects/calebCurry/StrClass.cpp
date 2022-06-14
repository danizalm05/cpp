 /*   
 C++ Programming Tutorial 24 - String Class and C Strings
 StrClass.cpp
 g++ StrClass.cpp
 https://www.youtube.com/watch?v=-t07hCkdHjI&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=26
 5:20
 
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
    std::string  r = greeting + " there" ;
    std::cout <<"r =m" + r <<  std::endl;
    std::cout <<"r.length() = " << r.length() <<  std::endl;

}  
 