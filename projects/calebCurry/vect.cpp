 /*      Intro to Vector
50: https://www.youtube.com/watch?v=YErKhAYBj2A&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=52
51: https://www.youtube.com/watch?v=Fm9otubOsqQ&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=53
52: Passing Vectors to Functions
     https://www.youtube.com/watch?v=aUhYCyU2Meo&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=55
 
  compile: 
       save file
       g++  vect.cpp -o  vect  -std=c++11
      ./vect

  https://www.geeksforgeeks.org/basic/cpp-vector/
   */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
 
using std::cout; 

void print_vector(std::vector<int> data)
{
   for(int i =0; i< data.size();i++)
    {
      cout <<" " <<data[i] << "\t";
    }

}

main()
{
 std::vector<int> data ={1,2,3}; 
 data.push_back(142);
 print_vector(data);
 cout << std::endl;   
 cout <<"Last item = " <<data[ data.size()-1] << std::endl;  
 data.pop_back();  
 cout <<"Last item = " <<data[ data.size()-1] << std::endl;      
} 