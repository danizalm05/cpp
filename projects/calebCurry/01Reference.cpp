 /*  
      Tutorial 1 and 2 - Working with References in C++
https://www.youtube.com/watch?v=OCL7mSFCIx0&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7
https://www.youtube.com/watch?v=GVEcLAX7ogk&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=2   
3:44
      1.   save file
      2.  g++  01Reference.cpp  -o  refe  -std=c++11
      3.  ./refe
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
   */

#include <iostream>
 

int main(){
 int a =10;
 int& b =a;
 int c =100;
 std::cout <<"a =" <<a << std::endl <<"b ="  <<b <<   std::endl;
 std::cout <<"&a =" <<&a << std::endl <<"&b ="  <<&b <<   std::endl;
 a = 15;
 std::cout <<"a = " <<a << std::endl <<"b = "  << b <<   std::endl;









 return 0;
}//main
 
 
  
  