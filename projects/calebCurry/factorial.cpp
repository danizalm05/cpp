 /*   Literals
C++ Programming Tutorial 37 - For Loops (How to Calculate Factorial)
 g++ filename.cpp
 g++   main.exe filename.cpp
 https://www.youtube.com/watch?v=M7wOciv50fY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=39
 4:35 
 */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
 
using std::cout;

main(){
   int factorial = 5;
   for (int   i = factorial -1; i > 0; i--)
     {
        factorial = factorial * i;
        
        std::cout << i<<  "] = "<<  factorial<< std::endl;
     }
   
   
   int i =0;
   while (i<10)
    {
      std::cout <<  i <<  "] = "<< i<< std::endl;
      i++;
    }
   

     return 0;
 
}  
 