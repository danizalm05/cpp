 /*  5:50
      Tutorial 4   Reference, Pointer Explained
 https://www.youtube.com/watch?v=u5AH2Wn6h1o&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=4     1. save file
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
  
 std::cout << " \n x = 5\n-----------" << std::endl;
 std::cout <<"&x="<< &x <<" x="<<x <<" *y="<<*y<< std::endl;
  //&x=0xa34d1ffbe4 x=5 *y=5
 std::cout << "\n x = 6\n-----------" << std::endl;
 x = 6;
  //&x=0xa34d1ffbe4 x=6 *y=6
 std::cout <<"&x="<< &x <<" x="<<x <<" *y="<<*y<< std::endl;

std::cout << "\n *y = 7\n-----------" << std::endl;
 *y = 7;
 //x=0xc56f7ffd14 x=7 *y=7
 std::cout <<"&x="<< &x <<" x="<<x <<" *y="<<*y<< std::endl;

std::cout << "\nz =10  y = &z\n-----------" << std::endl;
 int z =10;
 y = &z;
 //&x=0xc56f7ffd14 x=7 *y=10
 std::cout <<"&x="<< &x <<" x="<<x <<" *y="<<*y<< std::endl;


std::cout << "\nz =10  y = &z\n-----------" << std::endl;
 x =5;
 *y = 60;
 //&x=0xf3a4dffa44 x=5 *y=60
 std::cout <<"&x="<< &x <<" x="<<x <<" *y="<<*y<< std::endl;

 return 0;
}//main
 
 
  
  