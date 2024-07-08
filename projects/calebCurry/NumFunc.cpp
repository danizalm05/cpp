 /*   
C++ Programming Tutorial 23 - Numeric Functions
 https://www.youtube.com/watch?v=LFu4Qi8OSr0&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=25
 
 */

#include <iostream>
#include <climits>
#include <cmath>


using std::cout;

main(){
    cout << std::endl;   
    cout <<"sqrt(25 ) = " << sqrt(25 ) << std::endl;   
    cout <<"pow(9,999 ) = "<< pow(9,999 ) << std::endl;   
    cout <<"remainder(10, 3.25 ) = "<<remainder(10, 3.25 ) << std::endl;  
    cout <<"10 % 3  = "<< 10 % 3  << std::endl;   
    cout <<"fmax(10, 3.25) = "<< fmax(10, 3.25) << std::endl;  
    cout <<"fmin(10, 3.25) = "<< fmin(10, 3.25) << std::endl; 
     cout <<"trunc(fmin(10, 3.25)) = "<< trunc(fmin(10, 3.25)) << std::endl;  
}  
 