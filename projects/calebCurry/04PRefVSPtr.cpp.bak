 /*   
      Tutorial 4   Pass by Value vs Reference vs Pointer
  https://www.youtube.com/watch?v=minNjVO8jkM&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=6 
  4:00
        compile: 
            g++  04PRefVSPtr.cpp  -o  poit  -std=c++11
        run:  
            ./poit
 ---------------------------
        debug
   F5            Start Debugging   
  shift + F5     exit debug
  F10            move to next line
   */

#include <iostream>
#include <vector>


void work(int x){
    x++;
    std::cout << "(work)  x = " << x <<std::endl;
    std::cout << "(work) &x = " << &x <<std::endl;
} 

void workByRef(int &x){
    x++;
    std::cout << "(work)  x = " << x <<std::endl;
    std::cout << "(work) &x = " << &x <<std::endl;
} 

int main(){

 int a = 10;
 work(a);
 std::cout <<"(main) a = "<< a  << std::endl;
 std::cout <<"(main) &a = "<< &a  << std::endl;


 std::cout <<"\n\nWork By Reference  "<<   std::endl;
 workByRef(a);
 std::cout <<"(main) a = "<< a  << std::endl;
 std::cout <<"(main) &a = "<< &a  << std::endl;

 //passing by pointer
 return 0;
}