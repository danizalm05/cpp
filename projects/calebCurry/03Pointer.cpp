 /*  3:30
      Tutorial 4   Reference, Pointer Explained
 https://www.youtube.com/watch?v=u5AH2Wn6h1o&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=4
      1. save file
      2. compile:  g++  03Pointer.cpp  -o  poit  -std=c++11
      3. run:  ./poit
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
   */

#include <iostream>
#include <vector>
  
int main(){

 int x =5;
 int *y = &x;

 std::cout << " \n\n x =5\n---------" << std::endl;
 
 std::cout <<" &X = "<< &x << std::endl;
 std::cout <<"  X = "<<  x << std::endl;
 std::cout <<" *y = "<< *y << std::endl;

 std::cout <<"\n change x to 6" << "\n---------" << std::endl;
 x =6;
 std::cout <<" &X = "<< &x << std::endl;
 std::cout <<"  X = "<<  x << std::endl;
 std::cout <<" *y = "<< *y << std::endl;

 return 0;
}//main
 
 
  
  