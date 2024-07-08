 /* 
55 - STL Arrays in Practice  (standard template library)
   https://www.youtube.com/watch?v=7deP9hMwA60&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=57
   
    g++ STL_Arrays.cpp -o STL_Arrays

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

void print_array(std::array<int, 20> data,int size)
{
   for(int i =0; i < size ;i++)
    {
      cout <<" " <<data[i] << "\t";
    }
   cout <<"\n ";
} 

main()
{
 std::array<int,20> data ={1,2,3}; 
 
 print_array(data,3);
    
} 

 