 /*    77 - Creating a Namespace
 https://www.youtube.com/watch?v=Jf53MErcZVY&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=79
  
      1.   save file
      2.  g++  77Namespace.cpp -o  nspc  -std=c++11
      3.  ./nspc
  */

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
 
using std::cout; 


namespace utils{
 void print_vector(std::vector<int> data)
 {
      for(int i =0; i< data.size();i++)
      {
        cout <<" " <<data[i] << "\t";
      }

 }

}

//using namespace::utils;




main()
{
 std::vector<int> data ={1,2,3}; 
 data.push_back(142);
 utils::print_vector(data);
 //print_vector(data);
 cout << std::endl;   
 cout <<"Last item = " <<data[ data.size()-1] << std::endl;  
 data.pop_back();  
 cout <<"Last item = " <<data[ data.size()-1] << std::endl;      
} 