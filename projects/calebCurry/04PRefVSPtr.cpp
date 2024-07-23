 /*   
          Pass by Value vs Reference vs Pointer
  https://www.youtube.com/watch?v=minNjVO8jkM&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=6 
  7:00
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
    std::cout << "(workByRef)  x = " << x <<std::endl;
    std::cout << "(workByRef) &x = " << &x <<std::endl;
} 

void workByPtr(int *x){
    (*x)++;
    std::cout << "(workByPtr)  *x = " << *x <<std::endl;
    std::cout << "(workByPtr) &x = " << &x <<std::endl;
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
 std::cout <<"\n\nWork By pointer  "<<   std::endl;
 int c = 10;
 int *b = &c;
 //void workByPtr(int *x)
 workByPtr(b);

  std::cout <<"(main) c = "<< c << std::endl;
 //std::cout <<"(main) &b = "<< &b  << std::endl;
 
 std::vector<int> data {1, 2, 3, 4, 5};
 // workByRef(int &x)
 workByRef(data)
 return 0;
}