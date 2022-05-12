 

#include <iostream>
//#include <cmath>
//https://www.youtube.com/watch?v=G4v8MkLTEwQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=15
//C++ Core Guidelines:
//   https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md

//https://www.youtube.com/watch?v=lA9mbgOo2MY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=16
double pow(double base, int exponent){

 double result = 1;
 for (int i=0; i < exponent; i++){
     result = result * base;
 }
 return result;
}//pow


void print_pow(double base, int exponent){
  
    
    double myPower = pow(base, exponent);
    std::cout <<base <<" raised to the " <<exponent << " power is " << myPower<< ".\n" << std::endl;
}//print_pow


int main()
{ 
    double base;
    int exponent;
    std::cout  << " base? " << std::endl ;
    std::cin >> base; 
    std::cout  << " exponent? " << std::endl ;
    std::cin >> exponent; 
    print_pow(base, exponent);
}

