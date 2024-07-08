 /* 
55 - STL Arrays in Practice
   https://www.youtube.com/watch?v=7deP9hMwA60&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=57
    g++ guess.cpp -o guess  

Arrays in STL are sequential containers that are very similar to 
static arrays. 
They are continuous blocks of memory and have static sizes. 
Although there are very similar to static arrays in C++, 
their member functions make them more efficient. 
They are implemented as static arrays in memory.


   */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <array>
 
using std::cout; 

 

main()
{
 std::array<int,20> data ={1,2,3}; 
 
 //print_vector(data);
    
} 

 