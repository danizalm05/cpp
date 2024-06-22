 /*  
      Tutorial 1 and 2 - Working with References in C++
https://www.youtube.com/watch?v=OCL7mSFCIx0&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7
https://www.youtube.com/watch?v=GVEcLAX7ogk&list=PL_c9BZzLwBRJkVDaJbLHrrjNH_phcbCy7&index=2   
5:34
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
 
void work (int x){
     x++;
}
int main(){

 int a =10;
 int& b = a; //Create a reference
 
 
 
 
 
 
 
 std::cout <<"a =" <<a  <<" b ="  <<b <<   std::endl;
 std::cout <<"&a =" <<&a  <<" &b =" <<&b <<   std::endl;
 
 work ( a);
 std::cout <<"\n\n  After work(); \n"<<"  --------\n"   ;
 std::cout <<"a =" <<a  <<" b ="  <<b <<   std::endl;
 std::cout <<"&a =" <<&a  <<" &b =" <<&b <<   std::endl;




 // '&a'   is the address   of 'a' 
 // int& b = a; //Create a reference. 
                // b referes to the same location as a
 
 
 
 a = 15;
 std::cout <<"\n\n  After  a = 15; \n"<<"  --------\n"   ;
 std::cout <<"a = " <<a  <<" b = "  << b <<   std::endl;



int c =100;
b =c;
std::cout <<"\n\n  After b =c; \n"<<"  --------\n"   ;
std::cout <<" a =" <<a  <<" b ="  <<b <<   std::endl;
std::cout <<" &a =" <<&a  << " &b ="  <<&b <<   std::endl;
 





 return 0;
}//main
 
 
  
  