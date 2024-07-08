 /*  
     Tutorial 96 - Class Across Files - Multifile Compilation
      https://www.youtube.com/watch?v=nbd7o8iKh9Q&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=98
     4:14
      1.   save file
      2.  g++   96main.cpp user.cpp -o  multi  -std=c++11
      3.  ./multi
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
   */


#include <iostream>
#include <vector>
#include <string>

#include "user.h" 
int main()
{
  User user; 
  user.first_name = "Domi";
  user.last_name = "Lavender";
  std::cout << user <<   std::endl;  //Call a friend  function
  return 0;
}
 