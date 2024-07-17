 /*  5:50
      Tutorial 4   Reference, Pointer Explained
 https://www.youtube.com/watch?v=u5AH2Wn6h1o&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=4     1. save file
      2. compile: 
            g++  03Pointer-02.cpp  -o  poit  -std=c++11
      3. run: 
             ./poit
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
   */

#include <iostream>
#include <vector>

void change(int x){
    x=10;
}  

void changePtr(int *x){
    *x=10;
} 
int main(){

 int x =5;
 
 change( x);
 std::cout <<" x = "<< x << std::endl;
 changePtr( &x);
 std::cout <<" x = "<< x << std::endl;

 return 0;
}//main
 
 
  
  